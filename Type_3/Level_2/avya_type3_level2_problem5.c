#include<stdio.h>
#include<string.h>

int stack[100];
int top = -1;

void push(int x){
    top++;
    stack[top] = x;
}

int pop(){
    int x=stack[top];
    top--;
    return x;
}

int main(){
    char s[315];
    scanf("%[^\n]s",s);

    int ans=0;
    int i=0;
    

    while(s[i]!='\0'){
        if(s[i] == '+'){
            int a = s[i+1]-48;
            push(a);
            i=i+2;
        }

        else if(s[i] == '-'){
            int a = -1*(s[i+1]-48);
            push(a);
            i=i+2;
        }

        else if (s[i] == '*'){
            int b = s[i+1] - 48;
            int a = pop()*b;
            push(a);
            i=i+2;
        }

       else if(s[i] == '/'){
            int b = s[i+1] - 48;
            int a = pop()/b;
            push(a);
            i=i+2;
        }

        else if(s[i] == ' '){
            i++;
            continue;
        }

        else{
            int a = s[i] - 48;
            push(a);
            i++;
        }
    }

     while (top!= -1)
     {
         ans = ans + pop();
     }
     printf ("%d ",ans);

     return 0;
    
}