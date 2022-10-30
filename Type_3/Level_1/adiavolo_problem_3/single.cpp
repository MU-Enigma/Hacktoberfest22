#include <iostream>
using namespace std;

int Search_Digit(int A[], int size)
{
    int a = A[0];
    for (int i = 1; i < size; i++){
        a = a ^ A[i];
    }

    return a;
}

int main(){
   
    cout<<"enter size of the sequence ";
    int n;
    cin >> n;

    cout<<"enter the array values: ";
    int arr[n];
    for (int i = 0; i <n; i++){
        cin >> arr[i];
    }

    cout << Search_Digit(arr, n);
    return 0;
}