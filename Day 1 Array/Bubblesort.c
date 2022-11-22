#include<stdio.h>
int main()
{
    int n,swap,i,j,flag = 0,c = 0;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        flag = 0;
        for (j = 0; j< n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
                flag = 1;
            }
        }
        if(flag == 0)
            break;

        printf("After pass %d : [ ",i+1);
        for (c = 0; c < n; c++)
        {
            printf(" %d ",arr[c]);
        }
        printf(" ]\n\n");

    }



    return 0;
}
