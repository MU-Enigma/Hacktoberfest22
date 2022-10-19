#include <stdio.h> 

//function for finding element with single occurence
int single_element(int arr[], int size ){
    for (int i=0; i<size; i++){
        int c = 0;
        for (int j=0; j<size; j++){
            if(arr[i]==arr[j])
                c++;
        }
        //checking if the number has only one as frequency
    if (c==1)
        return arr[i];
    }
    return -1;
}

int main(){
//taking in the array size and array values
    int n;
    printf("Please enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
//function calling for finding single occurence number
    printf("\n The element occuring once is %d", single_element(arr,n));

    return 0;
} 
