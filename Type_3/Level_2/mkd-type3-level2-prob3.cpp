/*Given an integer array nums and an integer k,
  return the k most frequent elements. You may return
  the answer in any order.
*/

#include<iostream>

using namespace std;

int main(){
        int n;
        cin>>n;

        int nums[n];
        for(int i=0; i<n; i++)
            cin>>nums[i];
        
        int k;
        cin>>k;

        int freq[n];
        for (int i=0; i<n; i++){
            int rt = 1;
            for (int j=i+1; j<n; j++)
                if(nums[i] == nums[j]){
                    rt++;
                    freq[j] = -1;
                }
            
            if (freq[i] != -1)
                    freq[i] = rt;
        }


        for(int i=0; i<n; i++)
            if(freq[i]>=k)
               cout<<nums[i]<<" ";
    
    return 0;
}  