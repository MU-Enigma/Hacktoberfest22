#include <stdio.h>

#define MAX_BUFFER_SIZE 106

int main() {

    char arr[MAX_BUFFER_SIZE];
    char c, i = 0;
    while ((c = getchar()) != '\n') {
        arr[i++] = c;
    }

    while (i >= 0) {
        putchar(arr[--i]);
    }

    return 0;
}