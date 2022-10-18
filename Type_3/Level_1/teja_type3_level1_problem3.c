/*Problem 3: Given a non-empty array of integers nums, 
every element appears twice except for one. 
Find that single one. */

#include <stdio.h>

int find_single(int arr[], int size ){
    int i;
    for (i=0; i<size; i++){
        int count = 0;
        for (int j=0; j<size; j++){
            if(arr[i]==arr[j])
                count++;
        }
    if (count==1)
        return arr[i];
    }
    return -1;
}

int main(){
    int size;
    printf("enter array size\n");
    scanf("%d", &size);
    int array[size];
    printf("enter elements");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    printf("\nelement occuring once is %d", find_single(array,size));

    return 0;
}