#include<iostream>
using namespace std;

int maximum_minimum(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    for(int i =1;i<n;i++)
    {
        if(max < arr[i])
        max = arr[i];
        else if(min > arr[i])
        min = arr[i];
    }
    cout << "Maximum value is "
        << max
        << "\n";
    cout << "Minimum value is "
        << min
        << "\n";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maximum_minimum(arr,n);
    
    return 0;
}