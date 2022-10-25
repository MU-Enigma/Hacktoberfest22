#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void TCSOLVE(){
    ll n;
    cin >> n;
    vector<vector<int>> res;
    for(int i = 0;i<n;i++){
        vector<int> v(i + 1,1);
        for(int j =1;j<i;j++){
            v[j] = res.back()[j - 1] + res.back()[j];
        }
        res.push_back(v);
    }    

    for(auto x: res){
        for(auto ans: x){
            cout << ans << " ";
        }
        cout << endl;
    }
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