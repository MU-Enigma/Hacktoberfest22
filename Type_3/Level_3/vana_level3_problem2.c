#include<stdio.h>
int main(){
    int size, i=0;
    
    printf("Enter size of array\n");
    scanf ("%d",&size);
    
    int array[size];
    int count_array[size];
    
    printf("Enter the elements: ");
    
    for(i=0;i<size;i++){
        scanf ("%d",&array[i]);
    }
    
    for(i=0; i<size; i++){
        count_array[i]=0;
    }
    
    for(i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if(array[i]>array[j])
                count_array[i]++;
        }
    }

    printf("[");
    for(int i=0; i<size; i++){
            if (i!=size-1)
                printf("%d,",count_array[i]);
            else
                printf("%d", count_array[i]);
    }
    printf("]");
    return 0;
}

