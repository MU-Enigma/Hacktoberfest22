#include<stdio.h>

int sum_digits(int n){
    int i,sum=0;
    while(n){
        i=n%10;
        sum=sum+i*i;
        n=n/10;
    }
    return sum;
}

int happy(int n){
    int slow=n,fast=n;

    do{
        slow=sum_digits(slow);
        fast=sum_digits(fast);
        fast=sum_digits(fast);
    }while(slow!=fast);

    if(slow==1)
        return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    if(happy(n)){
        printf("true");
    }
    else{
        printf("false");
    }
}