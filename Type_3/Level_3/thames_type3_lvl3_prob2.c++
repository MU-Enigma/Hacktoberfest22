#include <iostream>
using namespace std;
void find(int arr[], int *count, int n)
{int i,j;
    for ( i = 0; i < n; i++)
        count[i] = 0;
    for ( i = 0; i < n; i++)
        for ( j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                count[i]++;
}
void print(int arr[], int n)
{int i;
    for ( i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout <<endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int *m = (int *)malloc(sizeof(int) * n);
    find(a, m, n);
    print(m, n);
    return 0;
}
