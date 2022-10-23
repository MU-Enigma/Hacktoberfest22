/* Vivek Dhir */
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define setbits(x) __builtin_popcountll(x)// counts no. of 1s
#define zrobits(x) __builtin_ctzll(x)// counts no. of zeros on left
#define mod 1000000007
#define INF 322337200489576
#define VI vector<int>
#define VL vector<ll>
#define AI(arr, t) VL arr(t); FA(i, 0, t) cin>>arr[i];
#define print(arr) for(auto x: arr) cout<< x <<' '; cout<<'\n';
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define VIVEK_DHIR() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#ifndef ONLINE_JUDGE
#define debug(x) cerr << x<< endl;
#endif
bool revsort(ll a, ll b) {return a > b;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll M) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % M; a = (a * a) % M; b = b >> 1;} return res;}
void fil(){ 
#ifndef ONLINE_JUDGE
freopen("in.txt", "r", stdin);freopen("out.txt", "w", stdout);freopen("error.txt", "w", stderr); 
#endif
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    vector<int> ans(n,0);
    for(int i=0;i<n; i++){
        int cnt = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j])cnt++;
        }
        ans[i]=cnt;
    }
    print(ans);
}

int main(){
    VIVEK_DHIR();
    //fil(); 
    ll t = 1;
    // cin>>t;
    FA(i, 1, t+1){
        // cout << "Case #"<< i <<": ";
        solve(); 
        //cout<<"\n";
    }
}