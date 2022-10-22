/*# Problem 2: Count of Smaller Numbers After Self
Given an integer array nums, return an integer array counts where `counts[i]` is the number of smaller elements to the right of `nums[i]`.

```
Example 1:

Input: nums = [5,2,6,1]
Output: [2,1,1,0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.
```
```
Example 2:

Input: nums = [-1]
Output: [0]
```
```
Example 3:

Input: nums = [-1,-1]
Output: [0,0]
```
 
Constraints:

- `1 <= nums.length <= 105`
- `-104 <= nums[i] <= 104`
<br>
*/
#include <stdio.h>
int chartointcov(char c){
    return (((int)c)-48);
}
int isitdigit(char a){
    if (chartointcov(a)>=0 && chartointcov(a)<=9){
        return 1;
    }
    else{
        return 0;
    }
}
int less(int array[],int n,int m){
    int count=0;
    for (int j=n;j<m;j++){
        if (array[j]<array[n]){
            count++;
        }
    }
    return count;
}
int main(){
    int array[100];
    char temp;
    int i=0;
    while (temp!=']'){
        scanf("%c",&temp);
        if (isitdigit(temp)==1){
            array[i]=chartointcov(temp);
            i++;
        }
    }
    printf("[");
    for (int icecream=0;icecream<i;icecream++){
        if (icecream==i-1){
            printf("%d]",less(array,icecream,i));
        }
        else{
            printf("%d,",less(array,icecream,i));    
        }

    }
}