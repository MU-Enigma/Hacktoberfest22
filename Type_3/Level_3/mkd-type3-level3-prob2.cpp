/*Given an integer array nums, return an integer array
 counts where counts[i] is the number of smaller elements
to the right of nums[i].
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int nums[n], counts[n];
    for(int i=0; i<n; i++)
        cin>>nums[i];

    for(int i=0; i<n; i++){
        int ct=0;
        for(int j=i+1; j<n; j++)
            if(nums[i]>nums[j])
                ct++;

        counts[i]=ct;
    } 
    for(int i=0; i<n; i++)
        cout<<counts[i]<<" ";

    return 0;
    
}