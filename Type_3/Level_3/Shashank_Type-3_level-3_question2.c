#include <stdio.h>
#include <stdlib.h>

// function that returns an integer array counts where small[i] is number of smaller
//  elements to the right of arr[i]
//  Takes in an integer array and its size "n" as arguements
//  returns pointer of the "small" integer array

int *smaller_nums(int arr[], int n);

// Main function takes size of array "n", array and k values from user
// and prints the value returned by function "smaller_nums"

// sample input : n = 4 [5 2 6 1]
// output       : 2 1 1 0
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *p = smaller_nums(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}

int *smaller_nums(int arr[], int n)
{
    int *small = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
        small[i] = count;
    }
    return small;
}