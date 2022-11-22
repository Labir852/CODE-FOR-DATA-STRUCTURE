#include<stdio.h>

void main()
{
    int i,n,location,element;

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

    for(i=0;i<=n;i++)
       {
           array2[i]=array1[i];
       }

    printf("\nEnter the location you want to add element in : ");
    scanf("%d",&location);
    if(location>=n || location<=0)
   {
       printf("\nLocation error!\n");
   }
else
{
   printf("\nEnter the element you want to add: ");
   scanf("%d",&element);

       for(i=location-1;i<n+1;i++)
       {
           array2[i+1]=array1[i];
       }
       array2[location-1]=element;
        printf("\nHere is you array with added element: ");
   printf("[ ");
   for(i=0;i<=n;i++)
   {
       printf("%d ",array2[i]);
   }
   printf("]\n\n");
   }



}
