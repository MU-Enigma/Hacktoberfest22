#include <stdio.h>

int square(int base)  //computing square
{
    return base * base;
}

int sqroot(int base) //computing square root interatively
{
    int root;
    for(int i = 0; i <= base; i++)
    {
        if(square(i) <= base)
        {
            root = i;
        }
        else
        break;
    }

    return root;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", sqroot(n));
}
