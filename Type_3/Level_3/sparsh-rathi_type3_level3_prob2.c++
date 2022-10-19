#include <iostream>
using namespace std;

void smaller_elements_array(int arr[], int *count_smaller, int n)
{
    for (int i = 0; i < n; i++)
    {
        count_smaller[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                count_smaller[i]++;
            }
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int *low = (int *)malloc(sizeof(int) * n);
    smaller_elements_array(A, low, n);
    display(low, n);
    return 0;
}