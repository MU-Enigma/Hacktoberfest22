#include<iostream>
using namespace std;
 int main(){
   int n,i,j,k,m,z=0;  
   cout<<"Enter size:"<<endl;
   cin>>n;
   cout<<"Enter array elements:"<<endl;
   int arr[n];
   for(i=0;i<n;i++)
   cin>>arr[i];
   cout<<"Number of frequencies:"<<endl;
   cin>>k;
   int crr[k];
   int  brr[n]={0};
   for(i=0;i<n;i++){
     for(j-i;j<n;j++){
        if(arr[i]==arr[j]){
            brr[i]++;
            arr[j]=-9999;
        }
     }
   }
   for(i=0;i<k;i++){
    for(j=0;j<n;j++){
        if(brr[j]>z){
            m=j;
            z=brr[j];
        }
    }
   }
