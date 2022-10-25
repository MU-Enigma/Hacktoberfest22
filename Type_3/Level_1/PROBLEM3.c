/*
# Problem 3: Single number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

```
Example 1:

Input: nums = [2,2,1]
Output: 1
```
```
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
```
```
Example 3:

Input: nums = [1]
Output: 1
```
 
Constraints:

- `1 <= nums.length <= 3 * 104`
- `-3 * 104 <= nums[i] <= 3 * 104`
- Each element in the array appears twice except for one element which appears only once.
<br>
*/
#include <stdio.h>
#include <stdlib.h>
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

int main(){
    int array[100];
    int i=0;
    char temp='[';
    while (temp!=']'){
        scanf("%c",&temp);
        if (isitdigit(temp)==1){
            array[i]=chartointcov(temp);
            i++;
        }

    }
    int k=array[0];
    for (int o=1;o<i;o++){
        k=k^(*(array+o));
    }
    printf("%d",k);
}