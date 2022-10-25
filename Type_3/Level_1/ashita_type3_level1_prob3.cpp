#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);

    int H[1000] = {0};

    for(int i=0; i<n; i++)
        H[nums[i]]++;

    for(int i=0; i<1000; i++)
    {
        if(H[i]==1)
        {
            cout<<i<<endl;
            break;
        }

    }
}