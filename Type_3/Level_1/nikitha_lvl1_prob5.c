#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stack{
    char value;
    struct stack* next;
};

struct stack* new_node(char value){
    struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
    stack->value=value;
    stack->next=NULL;
    return stack;
}

void push(struct stack** head,char value){
    struct stack* stack=new_node(value);
    stack->next=*head;
    *head=stack;
}

char pop(struct stack** head){
    if(!*head)
        return 0;
    struct stack* temp=*head;
    *head=(*head)->next;
    char pop=temp->value;
    free(temp);
    return pop;
}

void string_reversal(char *s){
    int n=strlen(s);
    struct stack* head=NULL;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            push(&head,s[i]);
        }
        else{
            while(head!=NULL){
                char x=pop(&head);
                printf("%c",x);
            }
            printf(" ");
        }
    }
    while(head!=NULL){
        char x=pop(&head);
        printf("%c",x);
    }
}

int main(){
    char* s=(char*)malloc(105*sizeof(char));
    scanf("%[^\n]%*c",s);
    string_reversal(s);
}