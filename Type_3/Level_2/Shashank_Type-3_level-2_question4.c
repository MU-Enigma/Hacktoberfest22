#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// function that takes node to be deleted as an arguement
// and properly deletes the node
// This function doesn't require head node pointer

void delete (struct node *del_node)
{
    struct node *temp = del_node->next;
    del_node->data = del_node->next->data;
    del_node->next = del_node->next->next;

    free(temp);
}

void print_list(struct node *head);

// Sample input : n = 4  4 5 1 9  node = 5
// output       : 4 1 9

int main()
{
    // taking input for n number of integers
    int n;
    struct node *head, *temp;

    scanf("%d", &n);
    temp = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &temp->data);

    head = temp;
    for (int i = 0; i < n - 1; i++)
    {
        struct node *build = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &build->data);
        temp->next = build;
        temp = temp->next;
    }
    temp->next == NULL;

    // Taking in input for data of node that needs to be deleted

    int node_del;
    scanf("%d", &node_del);

    temp = head;

    // Traversing till we find node that needs to be deleted

    while (temp != NULL)
    {
        if (temp->data == node_del)
        {
            delete (temp);
        }
        temp = temp->next;
    }
    print_list(head);
    return 0;
}

// function to print the linked list

void print_list(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}