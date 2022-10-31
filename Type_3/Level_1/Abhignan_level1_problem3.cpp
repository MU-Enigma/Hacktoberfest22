#include <iostream>
using namespace std;

void single_number(int *arr, int n)
{
    int a = arr[0];
    for (int i = 1; i < n; i++)
    {
        a = a ^ arr[i];
    }
    cout << a << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    single_number(arr, n);
    return 0;
}
