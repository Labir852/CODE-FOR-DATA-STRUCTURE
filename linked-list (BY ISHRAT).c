#include<stdio.h>

void main()
{
    int i,choose, n, num;

    printf("Enter the number of the length of the linklist: ");
    scanf("%d",&n);

    struct node
    {
        int data;
        struct node * next;
    };

    struct node *head,*newnode,*temp,*new_num;
    head = 0;

    printf("Enter data for the linked list: ");
    for(i = 1; i<=n; i++)
    {
        newnode = (struct node *) malloc(sizeof (struct node));
        scanf("%d",&newnode -> data);

        newnode -> next = newnode;


        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;

            if(i == n)
            {
                newnode->next = NULL;
            }
        }
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n");

    printf("\nEnter the value: ");
    scanf("%d",&num);

    temp = head;

    while(temp != NULL)
    {

        if(temp -> data == num)
        {
             new_num = (struct node *) malloc(sizeof (struct node));
            printf("\nEnter the new value: ");
            scanf("%d",&new_num->data);

            new_num->next = temp->next;
            temp->next = new_num;

            break;
        }
        else
        {
            temp = temp->next;
        }
    }

    if(temp == NULL){
        printf("\nvalue is not found.");
    }

    else{

    temp = head;
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n");

    }

}

