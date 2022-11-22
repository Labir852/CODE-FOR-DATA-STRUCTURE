#include<bits/stdc++.h>
using namespace std;
void reverse(char arr[], int n)
{
    char reversed[n];
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        reversed[i] = arr[j];
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << reversed[i];
    }
}
void Reve(char arr[],int n)
{
    int j = 1; 
    char swap;
    int mid = n/2;
    
    for (int i = 0; i <= mid; i++)
    {
            swap = arr[i];
            if(mid % 2 != 0 && i == mid)
            {
                 continue;
            }
            else 
            {
                if(i == mid)
                {
                    continue;
                }
                else
                {
                    arr[i] = arr [n-j];
                    arr[n-j] = swap;
                }
                
            }
            j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
    
}


int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Reve(arr,n);
    return 0;
}