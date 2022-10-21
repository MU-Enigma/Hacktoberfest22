// Problem 2 : Happy Number

#include<stdio.h>

int HappyNumber(int num){
    int remainder = 0, sum = 0;
    while (num>0){
        remainder = num%10;
        sum = sum + (remainder * remainder);
        num = num/10;
    }
    return sum;
}

int main(){
    int number;
    printf("Enter number:\n");
    scanf("%d",&number);
    int result = number;
    while(result != 1 && result != 2)
        result = HappyNumber(result);
    if(result == 1)
        printf("True");
    else if(result == 2)
        printf("False");
    return 0;
    
}