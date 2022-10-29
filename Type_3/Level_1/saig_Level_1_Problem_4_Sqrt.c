#include<stdio.h>
#include<math.h>
int sqrt_num(int n){
    if(n==0 || n==1)
        return n;
    int i=1, ans=1;
    while(ans<=n){
        i++;
        ans=i*i;
    }
    return i-1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sqrt_num(n));
}