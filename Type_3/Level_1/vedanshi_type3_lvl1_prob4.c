#include <stdio.h>
 int mySqrt(int x) {
        int lb = 0;
        int ub = x;
        while (ub > lb) {
            ub = lb +  (ub - lb) / 2;
            lb = x / ub;
        }
        return ub;
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int x= mySqrt(n);
        printf("%d",x);
        
    }