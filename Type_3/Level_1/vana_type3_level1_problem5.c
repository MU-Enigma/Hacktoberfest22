#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("enter string\n");
    scanf("%[^\n]s", s);
    int l= strlen(s);
    printf("[");
    for(int i=l-1; i>=0; i--){
            if (i!=s-1)
                printf("%c,",s[i]);
            else
                printf("%c",s[i]);
    }
    printf("]");
}