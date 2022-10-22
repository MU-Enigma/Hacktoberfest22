#include<iostream>
using namespace std; 

int main()
{
    int size;
    printf("Enter the size of the array ");
    cin>>size;
    int nums[size];
    int ans;
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the element number "<<i+1<<" ";
        cin>>nums[i];
        if (i==0)
        {
            ans = nums[0];
        }
        else
        {
            ans = ans^nums[i];
        }

    }

    cout<<ans;

    


    return 0;
}