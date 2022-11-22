#include<stdio.h>
int delete(int *a,int n)
{
    if(n==0)
        return -1;
    else
        return n-1;
}
void main()
{
    int i,n,a;
    printf("Enter value of array size: ");
    scanf("%d",&n);
   int array1[n];
    printf("\nEnter value of array 1 : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }


    printf("[ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("]");

    if(delete(a,n) != -1)
        {
            n--;
        }

    printf("\nAfter Deletion: [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("]");
    printf("\n\n");
}
