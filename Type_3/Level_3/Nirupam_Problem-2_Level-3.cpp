#include <iostream>
#include <cstdio>
using namespace std;

///////////////////////////////////////////////////////////////

void print_array(int *arr, int n)
{
    
    for(int i=0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

///////////////////////////////////////////////////////////////

int main()
{
    int size_num_arr = 0;
    cin>>size_num_arr;
    
    int *nums_arr = new int(size_num_arr);
    int *counts_arr = new int(size_num_arr);
    
    for(int i = 0;i < size_num_arr;i++)
    {
        scanf("%d", &nums_arr[i]);
    }
    
    if(size_num_arr == 1)
    {
        counts_arr[0] = 0;
    }
    
    else
    {
        for(int i=0;i < size_num_arr;i++)
        {
            int flag =0;
            for(int j=i+1;j < size_num_arr;j++)
            {
                if(nums_arr[i] > nums_arr[j])
                {
                    flag++;
                }
            }
            counts_arr[i] = flag;
        }
    }
    
    print_array(counts_arr, size_num_arr);
    
    return 0;
}
