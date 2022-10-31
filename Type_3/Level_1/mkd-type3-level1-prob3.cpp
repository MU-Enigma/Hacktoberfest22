/*Given a non-empty array of integers nums, 
every element appears twice except for one. 
Find that single one.

You must implement a solution with a linear 
runtime complexity and use only constant
extra space.


*/

#include<iostream>

using namespace std; 

int main(){
    int n;
    cin>>n;
    int nums[n];
    
    for (int i=0; i<n; i++)
        cin>>nums[i];
  
    int ans = nums[0];    
    for(int i=1; i<n; i++)
      ans = ans^nums[i];

    cout<<ans;
    return 0;
}