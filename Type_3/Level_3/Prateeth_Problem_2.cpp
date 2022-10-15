#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int *arr = new int [n];
    int *count  = new int [n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                k++;
            }
        }
        count[i]=k;
    }
    
    for(int i=0; i<n; i++){
        cout<<count[i]<<" ";
    }
    
    delete(arr);
    delete(count);
}