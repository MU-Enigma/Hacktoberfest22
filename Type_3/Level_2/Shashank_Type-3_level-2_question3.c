#include <stdio.h>
#include <stdlib.h>

// Function that prints k most frequent elements
// This function takes in an arr of integers, its size integer "n" and an integer "k" most frequent elements

void k_highest(int arr[], int n, int k);

// sample input :n = 6  1 1 1 2 2 3  k = 2
// output       : 1 2

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    k_highest(arr, n, k);
    return 0;
}

// prints k most frequent elements seperated by a space

void k_highest(int arr[], int n, int k)
{

    int frequency[n];

    for (int i = 0; i < n; i++)
    {
        int repeat = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                repeat++;
                frequency[j] = -1;
            }
        }
        if (frequency[i] != -1)
        {
            frequency[i] = repeat;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (frequency[i] >= k)
        {
            printf("%d ", arr[i]);
        }
    }
}