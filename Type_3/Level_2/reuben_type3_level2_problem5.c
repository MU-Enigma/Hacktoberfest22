#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// integer stack implementation
struct intStack 
{
  int *top;
  int max, count;
};
typedef struct intStack inst;

void inIntStack(inst *s, int max)  //initialising stack
{
  int *arr = (int*)malloc(max * sizeof(int));
  s->top = arr - 1;
  s->max = max;
  s->count = 0;
}

void intPush(inst *s, int val) 
{
  if (s->count == s->max) 
  {
    printf("int stack Overflow\n");
  } 
  else 
  {
    *++s->top = val;
    s->count++;
  }
}

int intPop(inst *s) 
{
  if (s->count == 0)
  {
    printf("Underflow\n");
    exit(0);
  } 
  else 
  {
     s->count--;
    return *s->top--;
  }
}

int peekInt(inst *s)
{
    return *s->top;
}

void printStack(inst *s) 
{
  int *temp = s->top - s->count + 1;
  for (int i = 0; i <= s->count ; i++) 
  {
    printf("%d ", *temp++);
  }
  printf("\n");
}

// character Stack implementation using arrays
struct stack 
{
  char *top;
  int max, count;
};
typedef struct stack st;

void inStack(st *s, int max)  //initialising stack
{
  char *arr = (char*)malloc(max * sizeof(char));
  s->top = arr - 1;
  s->max = max;
  s->count = 0;
}

void push(st *s, char val) 
{
  if (s->count == s->max) 
  {
    printf("char stack Overflow\n");
  }
  else 
  {
    *++s->top = val;
    s->count++;
  }
}

char pop(st *s) 
{
  if (s->count == 0)
  {
    printf("Underflow\n");
    return ' ';
  } 
  else 
  {
     s->count--;
    return *s->top--;
  }
}

char peek(st *s)  //peek in stack
{
    return *s->top;
}

// char queue implementation using arrays
struct queue
{
    char *arr;
    int front, rear;
    int max, count;
};
typedef struct queue que;

void inQueue(que *q, int max) //initialising queue
{
    q->arr = (char*)malloc(max * sizeof(char));
    q->front = -1;
    q->rear = -1;
    q->max = max;
    q->count = 0;
}

void enqueue(que *q, char val)
{
    if(q->count == 0)
    {
        q->front++;
    }
    if(q->count == q->max)
    {
        printf("queue Overflow");
        exit(0);
    }
    else
    {
        q->rear = (q->rear + 1) % q->max;
        q->arr[q->rear] = val;
        q->count++;
    }
}

char dequeue(que *q)
{
    if(q->count == 0)
    {
        printf("Underflow");
        exit(0);
    }
    else
    {
        q->count--;
        int temp = q->arr[q->front];
        q->front = (q->front + 1) % q->max;
        return temp;
    }  
}

char peekQ(que *q)  // peek at the front of queue
{
    return q->arr[q->front];
}

void printQueue(que *q)
{
    for(int i = q->front; i <= q->rear; i++)
    {
        printf("%c", q->arr[i]);
    }
}

int precedence(char c)  //assigning precedence of operators
{
    if(c == '(')
    return 0;
    else if(c == '+' || c == '-')
    return 1;
    else if(c == '*' || c == '/' || c == '%' )
    return 2;
    else 
    return 3;
}

que* convertToPostfix(char *infix)  //infix to postfix
{
    st *s = (st*)malloc(sizeof(st));
    inStack(s, strlen(infix) + 1);

    que *postfix = (que*)malloc(sizeof(que));
    inQueue(postfix, strlen(infix) + 5);

    infix[strlen(infix) - 1] = ')';  //end of expression pointer
    push(s, '(');

    int flag = 0;
    for(int i = 0; i < (int)strlen(infix); i++)
    {
        if(isdigit(infix[i]) == 0)
        {
            if(flag == 1)                       //flag = 1 only when enqueue just occured 
            {                                   //corresponding if helps evaluating expressions 
                enqueue(postfix, ' ');          //with multiple-digit expressions
                flag = 0;
            }
    
            if(infix[i] == ' ')
            {
                continue;
            }
            
            if(infix[i] == ')')
            {
                while(peek(s) != '(')
                {
                    enqueue(postfix, pop(s));
                    flag = 1;
                }
                pop(s);
            }
            
            else if(infix[i] == '(')
            push(s, infix[i]);
            
            else if(precedence(infix[i]) > precedence(peek(s)))
            push(s, infix[i]);
            else
            {
                while(peek(s) != '(' && precedence(infix[i]) <= precedence(peek(s)))
                {
                    enqueue(postfix, pop(s));
                    flag = 1;
                }
                push(s, infix[i]);
            }
        }
        else
        {
            enqueue(postfix, infix[i]);
            flag = 1;
        }
    }

    return postfix; 
}

int getNum(char c)  //convert digit from char to int
{
    int num = (int)c - 48;
    return num;
}

int operate(int x, int y, char c)
{
    switch(c)
    {
         case '+' : return x + y;
         break;
         case '-' : return y - x;
         break;
         case '*' : return x * y;
         break;
         case '/' : return y / x;
         break;
         default : 
         {
             printf("NOT AN OPERATOR");
             return 0;
         }
    }
}

int evaluatePostfix(que *postfix)
{
    inst *s = (inst*)malloc(sizeof(inst));  //creating integer stack
    inIntStack(s, postfix->count + 1);
    
    enqueue(postfix, ')');  //end of expression pointer

    while(postfix->count != 0)
    {
        if(isdigit(peekQ(postfix)) == 0)  //returns 0 if not a digit
        {
            if(peekQ(postfix) == ' ')
            {
                dequeue(postfix);
            }
            else if(peekQ(postfix) != ')')
            {
                intPush(s, operate(intPop(s), intPop(s), dequeue(postfix)));
            }
            else 
            break;
        }
        else  //push if operand
        {
            int val = 0;
            while(peekQ(postfix) != ' ')  //converting multi-digit number from int to char
            {
                val = val * 10 + getNum(dequeue(postfix));
            }
            intPush(s, val);  
        }
    }
    return peekInt(s);
}

int main() 
{
    char infix[1000];
    fgets(infix, 1000, stdin);

    printf("%d", evaluatePostfix(convertToPostfix(infix)));  //converting to postfix then evaluating

    return 0;
}
