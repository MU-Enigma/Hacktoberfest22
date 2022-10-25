#include <stdio.h>
#include <stdlib.h>

float froot(int x){
    int beg=0, end = x;
    int mid,i;
    float root;

    while (beg <= end){
        mid= (beg+end)/2;
        
        if(mid*mid == x){
            root = mid;
            break;
        }

        if(mid*mid < x){
            root = beg;
            beg= mid+1;
        }
        else{
            end= mid-1;
        }
    }

    float incr = 0.1;
    for(i=0; i<5; i++){
        while(root*root <= x){
            root += incr; 
        }
        root = root- incr;
        incr=incr/10;
    }
    return root;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%f", froot(n));
    return 0;
}