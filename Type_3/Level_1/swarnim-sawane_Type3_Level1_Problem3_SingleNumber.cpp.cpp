
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string x;
    getline(cin,x);
    
    int ans = 0;
    for(int i=0;i<x.length();i++){
        ans = ans^(x[i]-48);
    }
    cout<<ans;

    return 0;
}