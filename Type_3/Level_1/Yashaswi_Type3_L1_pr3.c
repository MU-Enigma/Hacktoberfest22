// C program to find the array element that appears only
// once
#include <stdio.h>
 
int findSingle(int ar[], int ar_size)
{
    // Do XOR of all elements and return
    int res = ar[0];
    for (int i = 1; i < ar_size; i++)
        res = res ^ ar[i];
    return res;
}
 
// Driver code
int main()
{
    int n;
    printf("Enter number of elements to input: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Element occurring once is %d",
           findSingle(arr, n));
    return 0;
}