// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    
    int n;
    cin>>n;
    int a[n],idx[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        idx[i]=0;
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                idx[i]++;
            }
        }
    }
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<idx[i];
        if(i!=n-1){
            cout<<",";
        }
    }
    cout<<"]";
    
    return 0;
}