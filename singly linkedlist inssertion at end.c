#include<stdio.h>
struct Node
{
    int data;;
    struct Node *next;
};

void pushend(struct Node *head,int val)
{
    struct Node *current = head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    current->next=newnode;
    newnode->data=val;
    newnode->next=NULL;
    printlist(head);
}

void printlist(struct Node *n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n=n->next;
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

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;
    printlist(head);

    pushend(head,40);
    return 0;
}

