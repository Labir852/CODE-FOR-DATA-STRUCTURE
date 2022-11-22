#include<stdio.h>
#define n 4
int a[n],press,var,front=0,rear=0,circ=0;
int enqueue(int value)
{

        if(rear==n)
        {
            if(a[circ]=='\0')
            {
                a[circ]=value;
                circ=circ+1;
            }
            else
            {
                printf("Queue Overflowed");
            }
        }
        else
        {

            a[rear]=value;
            rear=rear+1;
        }
}
int dequeue()
{
    if(front==rear)
    {
        printf("\n\nQueue is Empty");
    }
    else
    {
        if(front==n)
        {
            circ = 0 ;
            if(a[circ]!='\0')
            {
                a[circ]=NULL;
                circ=circ+1;
            }
        }
        else
        {
            front= front+1;
            a[front]=NULL;
        }
    }
}

int print()
{
    int i;
    if(front>rear)
    {
        printf("\n\n[ ");
        for(i=rear;i<front;i++)
        {
            printf("%d ",a[i]);
        }
        printf("]\n\n");
    }
    else
    {
        printf("\n\n[ ");
        for(i=front;i<rear;i++)
        {
            printf("%d ",a[i]);
        }
        printf("]\n\n");
    }

}
void main()
{
    while(1)
    {
        printf("\n\nPress '1' to insert  //  Press '2' to delete //  Press '3' to print // Press any key except '1,2,3' to delete : ");
        scanf("%d",&press);

        if(press == 1)
        {
            if(a[0]!='/0')
            {
                printf("\n\nEnter a value to insert: ");
                scanf("%d",&var);
                enqueue(var);
            }
        }
        else if(press == 2)
        {
            dequeue();
        }
        else if(press == 3)
        {
            print();
        }
        else
        {
            break;
        }
    }
}

