#include <stdio.h>

int main() {
    
    unsigned int x;
    scanf("%u", &x);
    
    for (unsigned int i = 0; i < 15; i++) {
        if (i * i < x && x < (i+1) * (i+1)) {
            printf("%u", i);
            break;
        }
    }
    
    return 0;
}