#include<iostream>
using namespace std;
int main()
{int n,i,j;
  cin>>n;
  int arr[n],brr[n]={0};
  for(i=0;i<n;i++)
  cin>>arr[i];
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(arr[i]>arr[j])
         brr[i]++;
  for(i=0;i<n;i++)
  cout<<brr[i]<<" ";
}
