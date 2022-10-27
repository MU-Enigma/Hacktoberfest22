#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    cout<<"enter number of elements= ";
    cin>>n;
    int nums[n];
    cout<<"enter the elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int counts[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(nums[i]>nums[j])
                count++;
        }
        counts[i]=count;
        count=0;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<counts[i]<<" ";
    }
    
}