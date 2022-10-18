#include <stdio.h>
int check(int n);
int main()
{
    int n;
    
    scanf("%d", &n);    
    int r= 0;
    r=check(n);
    while(r>=10)
    {
        
        r=check(r);
    }
    if(r==1)
    {
        printf("true");
        return 0;
    }
    else
    {
        printf("false");
        return 0;
    }
}  
int check(int n)
{
    int x=0;
    int sum=0;
    while(n>0)
    {
        x=n%10;
        sum=sum+(x*x);
        n=n/10;
    }    
    return sum;
}