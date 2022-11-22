#include<stdio.h>
#define maxsize 4
int front=0, rear=0,a[maxsize],var,press;
int queue(int value)
{
    a[rear]=value;
    rear++;
}

int dequeue()
{
   /* if(front==rear)
    {
        printf("\n\nQueue Underflowed..\n\nCouldn't retrieve values..\n\n");

        printf("rear = %d and front = %d and maxsize = %d \n\n",rear,front,maxsize);
    }
    else
    {*/
        a[front]=NULL;
        front++;
    //}
}

int print()
{
    int i ;
    printf(" \n\n[ ");
    for(i=0;i<rear;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n\n");

    printf("rear = %d and front = %d and maxsize = %d \n\n",rear,front,maxsize);
}

void main()
{
    while(1)
    {
        printf("Press 1 for insert / Press 2 for delete / press any key except (1,2) to terminate  : ");
        scanf("%d",&press);
        if(press==1)
        {
            if(rear!=maxsize)
            {
                printf("\n\nEnter a value: ");
                scanf("%d",&var);
                queue(var);
                print();
            }
            else
            {
               printf("\n\nQueue Overflowed..\n\nYou don't have sufficient storage..\n\n");
               printf("rear = %d and front = %d and maxsize = %d \n\n",rear,front,maxsize);
            }

        }
        else if(press == 2)
        {

        }
        else
        {
            break;
        }
    }
}
