#include<stdio.h>

void main()
{
    int i,n,max=0,max2=0,j;

    printf("Enter value of array size: ");
    scanf("%d",&n);
    int array1[n];
    printf("Enter value of array 1 : ");
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

    int min=array1[0],min2=array1[0];

    for(i=0;i<n;i++)
    {
        if(array1[i]>max)
        {
            max=array1[i];
        }
        if(array1[i]<min)
        {
            min=array1[i];
            j=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(array1[i]>min && array1[i]<max)
        {
            max2= array1[i];
        }
    }
     min2=99999;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  /* ignoring the smallest element */
		  i--;
        }
      else
        {
          if(min2>array1[i])
	     {
               min2=array1[i];
             }
        }
  }

    printf("\nThe maximum value in the array is %d ",max);
    printf("\nThe second maximum value in the array is %d ",max2);
    printf("\nThe minimum value in the array is %d ",min);
    printf("\nThe second minimum value in the array is %d ",min2);
}

