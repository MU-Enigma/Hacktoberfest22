#include <iostream>
using namespace std;

int findSingleDigit(int A[], int size)
{
    int k = A[0];
    for (int i = 1; i < size; i++)
    {
        k = k ^ A[i];
    }
    return k;
}

int main()
{
    int size;
    cin >> size;

    int A[size];
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    cout << findSingleDigit(A, size);
    return 0;
}