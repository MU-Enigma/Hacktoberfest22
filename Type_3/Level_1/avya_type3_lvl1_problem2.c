#include<stdio.h>
#include<math.h>

int check(int n){
    int d,x = 0;
    int sum = 0;
    while(n!=0){
        d = n%10;
        sum = sum + pow(d,2);
        n = n/10;
    }
   
    
    int c = sum;
    while(c!=0){
        c = c/10;
        x++;
    }

    if(x == 1){
        if(sum == 1){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        check(sum);
    }
    
}

int main(){
    int n;
    scanf ("%d",&n);
    int x = check(n);
    if(x == 1){
        printf ("true\n");
    }
    else{
        printf ("false\n");
    }

    return 0;
}