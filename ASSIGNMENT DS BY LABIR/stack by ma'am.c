#include<stdio.h>
#define n 10
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

     printf("%d ---" , a[top]);
     //printf("%c ---" , a[top]);
    //printf("%s ---" , a[top]);
}

int print()
{
    int i ;
    printf(" \n\n[ ");
    /*for(i=0;i<top;i++)
    {
        printf("%d ",a[i]);
    }*/

    for(i=0;a[i]!=NULL;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n\n");
}

void main()
{
    for(int i=0;i<=n;i++){
      //printf("%c ",a[n]);
       printf("%d ", a[n]);
      //printf("%s ",a[n]);
    }
    printf("\n");
    while(1)
    {
        printf("Press 1 to insert / press 2 to delete / press 3 to exit : ");
        scanf("%d",&press);
        if(press==1)
        {
            printf("\n\nEnter a value: ");
            scanf("%d",&var);
            push(var);
            print();
        }
        else
        {

            if(press == 2)
            {
                if(a[0]!='\0')
                {
                    pop();
                    print();
                }
                else
                {
                    printf("\n\nStack Undeflowed.. \n\nCouldn't retrieve data.. \n\nPlease insert some values in stack....\n\n");
                }
            }

            }

            if(press==3)
            {
                break;
            }
        }


    }

