#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

};

void printlist(struct Node *n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n=n->next;
    }
}

void reverse_printlist(struct Node *n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n=n->prev;
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 10;
    head->next = second;

    second->prev = head;
    second->data = 20;
    second->next = third;

    third->prev = second;
    third->data = 30;
    third->next = NULL;

    printlist(head);
    reverse_printlist(third);

    return 0;
}
