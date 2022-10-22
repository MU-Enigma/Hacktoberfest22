#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int nle[n];  // nle - no. of lesser elements 

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                nle[i]++;
            }           
        }
    }
    
    printf("[");
    for(int i = 0; i < n; i++)
    {
        if(i != n - 1)
        printf("%d,", nle[i]);
        else
        printf("%d", nle[i]);
    }
    printf("]");

    return 0;
}