#include<stdio.h>
#define n 4
int top=0, a[n],press,var;
int push(int value)
{
   if(top==n)
   {
       printf("\n\nStack Overflowed..\n\nYou don't have sufficient storage..\n\nPlease delete some values from stack..\n\n");
   }
   else
   {
       a[top]=value;
       top++;
   }
}

int pop()
{
    --top;
    a[top]=NULL;
}

int print()
{
    int i ;
    printf(" \n\n[ ");
    for(i=0;i<top;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n\n");
}

int main()
{
    while(1)
    {
        printf("Press 1 to insert / press 2 to delete / press any key except (1,2) to exit : ");
        scanf("%d",&press);
        if(press==1)
        {
            if(top<n)
            {
                printf("\n\nEnter a value: ");
                scanf("%d",&var);
                push(var);
                print();
            }
            else
            {
                printf("\n\nStack Overflowed.. \n\nYou don't have sufficient storage..\n\nPlease delete some values from stack..\n\n");
            }
        }
        else if(press == 2)
        {
            if(a[0]!='\0')
            {
                pop();
                print();
            }
            else
            {
                printf("\n\nStack Underflowed.. \n\nCouldn't retrieve data.. \n\nPlease insert some values in stack....\n\n");
            }
        }

        else
        {
            break;
        }
    }

    return 0;
}


