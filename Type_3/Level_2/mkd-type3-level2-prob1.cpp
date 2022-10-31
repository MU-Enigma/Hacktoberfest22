/*Given an integer array nums, return all the triplets
  [nums[i], nums[j], nums[k]] such that i != j, i != k,
   and j != k, and nums[i] + nums[j] + nums[k] == 0.
*/
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int nums[n];     
    for(int i=0; i<n; i++)
        cin>>nums[i];

    sort(nums, nums+n);
    for(int i=0; i<n; i++){
        int l=i+1, h=n-1;
        while(l<h){
            if(nums[l]+nums[h]< -nums[i])
                l++;
            else if(nums[l]+nums[h]== -nums[i]){
                cout<<nums[i]<<" "<<nums[l]<<" "<<nums[h]<<endl;
                break;
            }
            else if(nums[l]+nums[h]> -nums[i])
                h--;
        }
    }  
}

