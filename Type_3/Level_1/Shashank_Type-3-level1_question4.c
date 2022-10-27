#include <stdio.h>

// function takes in integer "num" and returns its square root trucating its decimals

int square_root(int num);

// Main function takes in one integer "num" and prints its square root truncating its decimals
// sample input : 8
// sample output: 2

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", square_root(num));
    return 0;
}

int square_root(int num)
{
    if (num != 1)
    {
        for (int i = 0; i <= num / 2; i++)
        {
            if ((i * i) > num)
            {
                return i - 1;
            }
        }
    }
    else if (num == 1)
    {
        return 1;
    }
}