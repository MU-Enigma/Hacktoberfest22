#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<math.h>    

#define size 10000

struct stack{

    char stack[size];
    int top;
};

void Push(struct stack*head, char st){
    
    //Pushing the char into stack//
    
    if(head->top==size-1){
        printf("Stack is full");
        return;
    }
    else{
        head->stack[++head->top]=st;
    }
}

void Pop(struct stack*head){
    
    //Popping the char from the stack//
    
    if(head->top==-1){
        printf("stack is empty");
        return;
    }
    else{
        head->top--;
    }
}

int precedence(char st){
    
    //Funciton for comparing the operators//
    
    if(st=='^'){
        return 2;
    }
    else if(st=='*' || st=='/'){
        return 1;
    }
    else if(st=='+' || st=='-'){
        return 0;
    }
    else{
        return -1;
    }
}
                            //---Infix to Postfix Conversion Using Stacks---//

char* solution(struct stack*head, char* st){
    
    int len=strlen(st);    //Finding the length of given string//
    char *ans=(char*)malloc(size*sizeof(char));    //Allocating dynamically memory for stroring each char//
    
    int k=0;    //For finding length of new string//
    
    for(int i=0; i<len; i++){
        
        if(st[i]>=0 && st[i]<=9){    //first keeping all alpha numeric into new string//
            ans[k]=st[i];
            k++;            //increamenting the length of the string//                
        }
        else if(st[i]=='('){
            Push(head,st[i]);    //if opening bracket pushing into stack//
        }
        else if(st[i]==')'){
            while(head->top!=-1 && head->stack[head->top]!='('){    //if no opening bracket found inputting into string and popping all out//
                ans[k]=head->stack[head->top];
                k++;
                Pop(head);
            }
            Pop(head);
        }
        else{
            while(head->top!=-1 && precedence(head->stack[head->top])>=precedence(st[i])){   //comparing the operators and if the operator in stack is greater in value than in the given string//
                ans[k]=head->stack[head->top];    //Add it to the new string first//
                k++;
                Pop(head);    //And then we will pop it out//
            }
            Push(head,st[i]);    //Pushing the lower value operator//
        }
    }
    while(head->top!=-1){
        ans[k]=head->stack[head->top];    //Inputting the remaning char into new string//
        k++;
        Pop(head);
    }
    
    return ans;    //returning the string//
}
                        //---Postfix Evaluation Using Stacks---//

int Postix_Evaluation(struct stack*head, char* st){
    
    int len=strlen(st);    //Finding the length of given string//
    
    for(int i=len-2; i>0; i--){
        if(st[i]>='0' && st[i]<='9'){
            int temp = (int)(st[i] - '0');
            Push(head,temp);
        }
    else{
                
        int a = head->stack[head->top];            // Pop element from the stack //
        head->top--;         // Pop another element from the stack //
        
        int b = head->stack[head->top];
        head->top--; 
        
        switch(st[i]){            //Use the switch case to deal with the operand accordingly//
                
            case '+':
                Push(head,b+a);
                break;
            case '-':
                Push(head,b-a);
                break;
            case '*':
                Push(head,b*a);
                break;    
            case '/':
                Push(head,(a/b));
                break;
            }
        }
    }
    return head->stack[head->top];
}

int main(){
    
    char s[size];
    scanf("%9999[^\n]s",s);    //Inputting the given string//
    
    int len=strlen(s);    //lenght of given string//
    
    for(int i=0; i<len; i++){      //Removing spaces in string//
        if(s[i] == ' '){  
            for(int j=i; j<len; j++){  
                s[j]=s[j+1];  
            }  
            len--;  
        }  
    }  
    
    struct stack*head=(struct stack*)malloc(sizeof(struct stack));    //Initializing an empty stack//
    head->top=-1;    //keeping top value as -1//
 
    if(len%2==0 && len>2){
        printf("Invalid Expression");    //condition for not valid string//
        free(head);        //freeing the allocated dymanic memory//
        return 0;
    }
    
    char* postfix=solution(head,s);    //calling the function//
    int ans=Postix_Evaluation(head,postfix);
    printf("%d",ans);    //Printing the given output//
    
    free(head);    //freeing the allocated dymanic memory//
}
