#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void TCSOLVE(){
    ll n,k;
    cin >> n;
    map<int,int> m;
    for(int i = 0;i<n;i++){
        ll x;cin >> x;
        m[x]++;
    }
    cin >> k;
    for(auto x: m){
        if(x.second >= k){
            cout << x.first << " ";
        }
    }

}
int main(){
    ll n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
        TCSOLVE();
}
