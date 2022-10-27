#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>

                            //---Reversing string using stacks---//

#define size 9999   //Defining size of the stack//

char stack[9999];     //Taking an stack with defined size//
int top=-1;           //Taking a variable top with value "-1"//

void Push(char value){    //Pushing the string into the stack//
    
    if(top==size-1){
        printf("stack is full");    //if the stack is filled then print stack is full//
        return;
    }
    else{
        top++;                //increase the top by one//
        stack[top]=value;    //inserting the each char into the stack//
    }
}        

char Pop(char value){        //Popping the top most element from the stack//
    
    if(top==-1){
        printf("stack is empty"); //No elements in the stack then printing empty//
        return 's';
    }
    else{
        top--;    //decrementing the top by one//
    }
    
    char st=stack[top];    //storing the pop element into st//
    return st;    //returning the popped element//
}

int main(){
    
    char st[size];
    scanf("%9999[^\n]c",st);    //scanning the given string//

    int len=strlen(st);    //Finding the length of the string//
    Push(']');
    int x=0;
    for(int i=0; i<=len; i++){
        if(st[i]=='[' || st[i]==']'){
            continue;
        }
        Push(st[i]);    //Pushing the elements into stack;
    }
    printf("[");
    
    for(int i=0; i<len; i++){
       printf("%c",Pop(st[i]));    //Printing the popped char//
    }
}
