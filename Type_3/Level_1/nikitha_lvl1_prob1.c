#include<stdio.h>

void pascal(int n){
    int array[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            array[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==j || j==0){
                array[i][j]=1;
            }
            else{
                array[i][j]=array[i-1][j-1]+array[i-1][j];
            }
        }
    }
    
    printf("[[");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++){
            printf("%d,",array[i][j]);
        }
        if(i!=n-1){
            printf("%d],[",array[i][i]);
        }
    }
    printf("%d]]",array[n-1][n-1]);
}

int main(){
    int n;
    scanf("%d",&n);
    pascal(n);
}