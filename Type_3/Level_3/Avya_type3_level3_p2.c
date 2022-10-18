#include<stdio.h>

int main(){
    int n;
    int i=0;
    scanf ("%d",&n);
    int num[n];
    int count[n];
    

    for(i=0;i<n;i++){
        scanf ("%d",&num[i]);
    }

    for(i=0;i<n;i++){
        count[i] = 0;
    }

    for( i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]>num[j]){
                count[i]++;
            }
            else{
                continue;
            }
        }
        
    }

    for(int i=0;i<n;i++){
        printf ("%d ",count[i]);
    }

    return 0;


}