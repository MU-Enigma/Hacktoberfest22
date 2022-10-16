#include<stdio.h>
#include<math.h>

int sqrt_num(int n){
    int res=sqrt(n);
    res=(int)res;
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sqrt_num(n));
}