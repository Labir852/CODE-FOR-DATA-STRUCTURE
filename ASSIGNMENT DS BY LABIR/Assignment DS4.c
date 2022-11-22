#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter value of array size: ");
    scanf("%d",&n);
    int array1[n];
    int array2[n+1];
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
     for(i=0;i<n;i++)
    {
       array2[i]=array1[i];
    }

    printf("\nAdd element: ");
    scanf("%d",&array2[n]);

printf("[ ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",array2[i]);
    }
    printf("]");
    printf("\n\n");
}
