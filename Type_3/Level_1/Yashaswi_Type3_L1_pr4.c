#include <stdio.h>

int main() {

    int input_integer;
    printf("Square root of (input integer):");
    scanf("%d", &input_integer);
    
    if (input_integer < 0) {
        printf("Invalid Input.\n");
        return 0;
    }
    

    for (unsigned int m = 0; m < 46341; m++) {
        if (m * m <= input_integer && input_integer < (m+1) * (m+1)) {
            printf("%u", m);
            break;
        }
    }

    return 0;
}