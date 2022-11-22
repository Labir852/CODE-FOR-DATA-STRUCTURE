#include<stdio.h>
void main()
{
    int i,j,n,value,mid,temp,hi,lo;
    printf("Enter the length of array : ");
    scanf("%d",&n);

    int array1[n];

    printf("Enter the elements of your array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("\nThe elements of the given array is : [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("]");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array1[j+1]<array1[j])
            {
                temp=array1[j];
                array1[j]=array1[j+1];
                array1[j+1]= temp;            }
        }
    }
    printf("\nThe sorted array is : [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("]");

    hi=n-1;
    lo=0;
    mid= (hi+lo)/2;

    printf("\nEnter the value you want to search : ");
    scanf("%d",&value);
for(i=0;i<n;i++)
{
    if(array1[mid]==value)
    {
        printf("\nYup!! we got the value at location %d ",mid);
        break;
    }
    else
    {
        if(array1[mid]>value)
        {
            hi=mid-1;
        }

        else
        {
            lo=mid+1;
        }

        mid = (hi+lo)/2;
    }

}
}
