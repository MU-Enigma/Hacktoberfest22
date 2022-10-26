#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void TCSOLVE(){
    string s;
    getline(cin,s);
    for(int i = 0;i < s.length()/2;i++){
        swap(s[i],s[s.length() - i - 1]);
    }   
    cout << s;
}
int main(){
    ll n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
        TCSOLVE();
}
