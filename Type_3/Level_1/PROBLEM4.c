/*
# Problem 4: Sqrt(x)

Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

**Note:** You are not allowed to use any built-in exponent function or operator, such as `pow(x, 0.5)` or `x ** 0.5`.

```
Example 1:

Input: x = 4
Output: 2
```
```
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
```
 

Constraints:

- `0 <= x <= 231 - 1`
<br>*/

#include <stdio.h>
int main(){
    int N,m;
    int k=0;
    scanf("%d",&N);
    if (N==1){
        k=1;
    }
    else{
        for (int i=1;i<46341;i++){
        if (i*i<N){
            k=i;
            //printf("%d ",k);
        }
        else if(i*i==N){
            k=i;
        }
        else if (i*i>N){
            break;
        }
    }

    }
    printf("%d",k);
}