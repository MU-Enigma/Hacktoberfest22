#include <stdio.h>
#include <string.h>

// c Function that reverses a string
//  Takes a string as an argument and returns the reversed string
// O(1) space complexity

char *reverse_string(char s[])
{
    for (int i = 0; i < (strlen(s) / 2); i++)
    {
        char c = s[strlen(s) - i - 1];
        s[strlen(s) - i - 1] = s[i];
        s[i] = c;
    }
    return s;
}

// driver code

// sample input : "hello"
//  output      : "olleh"

int main()
{
    char s[105];
    scanf("%s", s);
    printf("%s", reverse_string(s));
    return 0;
}