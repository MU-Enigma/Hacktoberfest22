#include <stdio.h>
#include <stdlib.h>
int Sqroot(int a){
        int S = 2, E = a, M;
        while(S <= E){
            M = S + (E - S)/2;
            if(M == a/M){
                return M;
            }
            if(M < a/M){
                S = M + 1;
            } 
            else{
                E = M - 1;
            }
        }
        if(S > a/S){
            return S - 1;
        }
        return S;
    }
int main(){
    int a;
    while(1){
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a<0){
       printf("Invalid input. Enter number again.\n");
    }
    if (a==0){
        printf("%d\n", 0);
        break;
    }
    if (a>=1){
        printf("%d\n", Sqroot(a));
        break;
    }
    }
    return 0;
}