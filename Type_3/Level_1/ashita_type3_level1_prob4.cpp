#include<iostream>
using namespace std;

int sqrt(int n)
{
    if(n==0 || n==1)
        return n;
    
    else
    {
        int i=1, res=1;

        while(res<=n)
        {
            i++;
            res = i*i;
        }

        return i-1;
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    cout<<sqrt(n)<<endl;
}