#include <iostream>
using namespace std;

//function to find number with single frequency
int Search_Digit(int A[], int size)
{
    int a = A[0];
    for (int i = 1; i < size; i++){
        a = a ^ A[i];
    }

    return a;
}

int main(){
    //inputing the array
    cout<<"Please enter size of the array: ";
    int n;
    cin >> n;

    cout<<"Please enter the array values: ";
    int arr[n];
    for (int i = 0; i <n; i++){
        cin >> arr[i];
    }
//calling the function to search single frequency number
    cout << Search_Digit(arr, n);
    return 0;
}