#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;
}Node;

int main()
{
    int size_list;
    scanf("%d", &size_list);
    
    Node *temp = (Node*)malloc(sizeof(Node));
    int head_data;
    scanf("%d", &head_data);
    temp->data = head_data;
    
    Node *start = temp;
    
    int temp_data;
    
    for(int i=0;i < size_list - 1;i++)
    {
        scanf("%d", &temp_data);
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = temp_data;
        temp->next = new_node;
        temp = new_node;
    }
    
    temp->next = NULL;
    
    int del_node_value = 0;
    scanf("%d", &del_node_value);
    
    if (del_node_value == start->data)
    {
            start = start->next;
    }
    
    else
    {
            temp = start;
            while(temp->next->data != del_node_value)
            {
                temp = temp->next;
            }
            Node *temp1 = (Node*)malloc(sizeof(Node));
            temp1 = temp->next->next;
            temp->next->next = NULL;
            temp->next = temp1;
    }
    
    temp = start;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    return 0;
}
