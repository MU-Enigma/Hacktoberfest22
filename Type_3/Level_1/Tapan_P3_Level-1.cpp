#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int nums[n];
    cout<<"Enter Array elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n; i++){
        int k = 0;
        for(int j=0; j<n; j++){
            if(nums[i]==nums[j])
                k++;
        }
    if (k==1)
        cout<<"Single Element: "<<nums[i]<<endl;
    }
    return -1;
}