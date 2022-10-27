
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    /*string x;
    getline(cin,x);
    int n = x.length() - (x.length())/2;
    int a[n];
    int j=0;
    for(int i=0;i<x.length();i++){
        int flag =0;
        if(x[i-1]=='-'){
            flag =1;
        }
        if(x[i]>='0' && x[i]<='9'){
            if(flag){
                a[j]=(x[i]-48)*-1;
            }else{
                a[j] = x[i]-48;
            }
            j++;
        }
    }*/
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;*/
    
    for(int i=0;i<n;i++){
        int lo = i+1,hi = n-1;
        while(lo<hi){
        //cout<<a[lo]<<" "<<a[mid]<<" "<<a[hi]<<endl;
            if(a[lo]+a[hi]==0-a[i]){
                cout<<a[i]<<" "<<a[lo]<<" "<<a[hi]<<endl;
                break;
            }else if(a[lo]+a[hi]<0-a[i]){
                lo++;
            }else if(a[lo]+a[hi]>0-a[i]){
                hi--;
            }
        }
    }
    
    return 0;
}