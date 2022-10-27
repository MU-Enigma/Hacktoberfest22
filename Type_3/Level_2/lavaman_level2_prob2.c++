#include<iostream>
using namespace std;
 int main(){
   int n,i,j,k,m,z=0;  
   cout<<"Enter size"<<endl;
   cin>>n;
   cout<<"Enter array elements"<<endl;
   int a1[n],a2[n],a3[n],a4[n];
   for(i=0;i<n;i++)
   cin>>a1[i];
   for(i=0;i<n;i++)
   cin>>a2[i];
   for(i=0;i<n;i++)
   cin>>a3[i];
   for(i=0;i<n;i++)
   cin>>a4[i];
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            for(m=0;m<n;m++)
             if((a1[i]+a2[j]+a3[k]+a4[m])==0)
             z++;
        }
    }
   }
   cout<<"Number of combinations are: "<<z;
   return 0;
 }