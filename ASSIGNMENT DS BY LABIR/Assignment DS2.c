#include<stdio.h>
void main()
{
    int i=0,n=0,j=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int array[n];
     int array2[n];

    printf("\nEnter the value of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nvalue before reversing : [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("]");

    for(i=n-1;i>=0;i--)
    {
        array2[j]= array[i];
        j++;
    }

    printf("\nvalue after reversing : [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
    printf("]");
    printf("\n\n");

}
