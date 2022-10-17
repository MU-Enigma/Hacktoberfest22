#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int l= strlen(a);
    for(int i=l-1;i>=0;i--)
    {
        printf("\"%c\"", a[i]);
    }
}