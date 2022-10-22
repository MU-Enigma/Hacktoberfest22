#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

string solve(string s){
    ll res = 0;
    for(int i = 0;i<s.length();i++){
        res += (s[i] - '0')*(s[i] - '0');
    }
    return to_string(res);
}

void TCSOLVE(){
    string s;
    cin >> s;
    while(s != "1"){
        s = solve(s);
        if(stoi(s) > 1 && stoi(s) < 10){
            cout << "false" << endl;
            return;
        }
    }    
    cout << "true" << endl;
}

int main(){
    ll n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    n = 1;
    while(n--){
        TCSOLVE();
    }
}
