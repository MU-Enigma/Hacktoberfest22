#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int* countSmallerElements(int *arr, int len)
{
    int *count = (int*)malloc(len * sizeof(int));  //stores number lesser elements
    for(int i = 0; i < len; i++)
    {
        count[i] = 0;  //setting count to 0 initially
        for(int j = i + 1; j < len; j++)
        {
            if(arr[j] < arr[i])
            {
                count[i]++;
            }           
        }   
    }

    return count;
}

int getNum(char c)  //convert digit from char to int
{
    int num = (int)c - 48;
    return num;
}

int main()
{
    char input[105];
    fgets(input, 105, stdin);
    
    int arr[105];
    int len = 0;  //stores effective length of array
    for(int i = 0; i < strlen(input); i++)  //extracting array from string
    {
        if(isdigit(input[i]) == 0)
        continue;
        else
        {
            arr[len++] = getNum(input[i]);
        }
    }

    int* count = countSmallerElements(arr, len);

    //print block
    printf("[");
    for(int i = 0; i < len; i++)
    {
        printf("%d", count[i]);
        if(i != len - 1)
        printf(",");
    }
    printf("]");
}
