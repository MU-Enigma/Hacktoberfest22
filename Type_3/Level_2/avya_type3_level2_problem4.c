#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void delete (struct node *temp)
{
    while (temp->next != NULL)
    {
        temp->data = temp->next->data;
        temp = temp->next;
    }
    temp = NULL;
}

int main()
{
    int n;
    scanf("%d", &n);
    struct node *new_node, *temp, *head;
    new_node = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &new_node->data);

    head = new_node;
    temp = new_node;

    for (int i = 1; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        temp->next = new_node;
        temp = temp->next;
    }
    temp->next = NULL;
    temp = head;

    int x;
    scanf("%d", &x);

    while (temp->data != x)
    {
        temp = temp->next;
    }

    delete (temp);

    temp = head;

    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}