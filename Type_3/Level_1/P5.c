/*
# Problem 5: Reverse string

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 
```
Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
```

```
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```
 

Constraints:

- `1 <= s.length <= 105`
- s[i] is a [printable ascii character](https://en.wikipedia.org/wiki/ASCII#Printable_characters).
*/
#include <stdio.h>
int chartointcon(char c){
    return ((int)c);
}
int isitalphabet(char a){
    if ((chartointcon(a)>=65 && chartointcon(a)<=90)|| (chartointcon(a)>=97 && chartointcon(a)<=122) || a==' '){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char array[100];
    char temp;
    int i=0;
    while (temp!=']'){
        scanf("%c",&temp);
        if (isitalphabet(temp)==1){
            array[i]=temp;
            i++;
        }
    }
    printf("[");
    for (int j=i-1;j>=0;j--){
        if (j==0){
            printf("\"%c\"",array[j]);
            printf("]");
        }
        else{
        printf("\"%c\"",array[j]);
        printf(",");
        }

    }
}
