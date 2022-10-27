#include<bits/stdc++.h>
 
using namespace std;
    
int main()
{
    cout<<"Enter array: ";
    char str[99999];
    scanf("%[^\n]s", str);
    int l= strlen(str);
    if(l>=1 && l<=105){
        for(int i=l-1;i>=0;i--){
            cout<<str[i];
        }
    }
    else{
        cout<<"Invalid ";
    }
    return 0;
}

