#include <math.h>
#include <stdio.h>
 
int floorSqrt(int x)
{
    if (x == 0 || x == 1)
        return x;
 
    long start = 1, end = x / 2, ans = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
 
        if (mid * mid == x)
            return (int)mid;
 
        if (mid * mid < x) {
            start = mid + 1;
            ans = mid;
        }
        else 
            end = mid - 1;
    }
    return (int)ans;
}
 
int main()
{
    int x;
    printf("ENter the number for which you need square root of:  ");
    scanf("%d", &x);
    printf("The root of the given number is %d\n", floorSqrt(x));
}
 