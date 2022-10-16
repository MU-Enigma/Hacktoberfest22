#include <stdio.h>

int main() {

    int x;
TAKE_INPUT:
    scanf("%d", &x);
    
    if (x < 0) {
        printf("Invalid Input.\n");
        goto TAKE_INPUT;
    }
    

    for (unsigned int i = 0; i < 15; i++) {
        if (i * i <= x && x < (i+1) * (i+1)) {
            printf("%u", i);
            break;
        }
    }

    return 0;
}