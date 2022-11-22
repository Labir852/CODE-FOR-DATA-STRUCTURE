#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter value of array size: ");
    scanf("%d",&n);
    int array1[n];
    int array2[n],sum[n];
    printf("\nEnter value of array 1 : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
printf("\nEnter value of array 2 : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }

for(i=0;i<n;i++)
    {
        sum[i] = array1[i] + array2[i];
    }
    printf("\nSummation of (array 1 + array 2) : [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",sum[i]);
    }
    printf("]");
    printf("\n\n");
}
