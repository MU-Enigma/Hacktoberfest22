#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void deleting(struct node **head, int k){
    struct node *temp;

    if((*head)->data==k){
        temp = *head;
        *head = (*head)->next;
        free(temp);
        }
    else
    {
        struct node *current = *head;
        while(current->next != NULL)
        {
            if(current->next->data ==k)
            {
            temp = current->next;
            current->next=current->next->next;
            free(temp);
            break;
            }
            else 
            current = current->next;
        }
    }
    
}

void printList(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
    struct node *prev,*head,*p;
    int n,i,k;
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    scanf("%d", &k);
    deleting(&head, k);
    printList(head);
    return 0;
}