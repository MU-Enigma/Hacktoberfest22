#include <stdio.h>

int fact(int n)  //finding fatorial
{
    if(n == 0)
    {
        return 1;
    }

    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int choose(int n, int r)  //finding n choose r
{
    int ncr = fact(n) / ( fact(r) * fact(n-r) );

    return ncr;
}

int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);

    int pascal[n][n];
    
    //driver code
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j <= i; j++)
        {
            pascal[i][j] = choose(i, j);
        }
    }
    
    printf("[");
    for(int i = 0; i < n; i++)
    {
        printf("[");
        for(int j = 0;j <= i; j++)
        {
            if(j != i)  //if-else done to format
            printf("%d,", pascal[i][j]);
            else
            printf("%d", pascal[i][j]);
        }
        
        if(i != n-1)
        printf("],");
    }
    printf("]");

    return 0;
}