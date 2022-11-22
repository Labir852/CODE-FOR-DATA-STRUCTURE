#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "THe number is " << n;

    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n << " ";
    }

}