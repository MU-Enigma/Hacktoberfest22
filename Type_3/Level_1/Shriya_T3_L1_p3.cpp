//Hacktoberfest22-Type1-P3_Single Number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[500], val, p=0;
    cin>>val;
    num[0] = val;

    while(cin.get()!='\n')
    {
        cin>>val;
        ++p;
        num[p] = val;
    }
    //cout<<num[0]<<endl;
    int count=p+1, maxi=num[0];
    for(int i=1; i<count; i++)
        maxi = max(num[i], maxi);
    //cout<<maxi<<endl;
    int dup[maxi+1];
    for(int i=0; i<maxi+1; i++)
        dup[i]=0;
    
    for(int i=0; i<count; i++)
        dup[num[i]]++;
    for(int i=0; i<maxi+1; i++)
        if(dup[i]==1)
        {
            cout<<i;
            break;
        }
    return 0;
}