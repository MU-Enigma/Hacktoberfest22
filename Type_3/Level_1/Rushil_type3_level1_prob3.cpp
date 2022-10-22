#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void TCSOLVE(){
    ll n;
    cin >> n;
    ll res = 0;
    for(int i =0;i<n;i++){
        ll x;
        cin >> x;
        res^=x;
    }    
    cout << res;
}
int main(){
    ll n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // n = 1;
    // while(n--){
        TCSOLVE();
    // }
}
