#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define u_map(mp) unordered_map<ll, ll> mp;
#define o_map(mp) map<ll, ll> mp;
#define arr(a, n)                \
    ll a[n];                     \
    for (ll i = 0; i < (n); i++) \
        cin >> a[i];
#define prt(a, n)              \
    for (ll i = 0; i < n; i++) \
        cout << a[i] << " ";
#define F first
#define S second
#define MOD 998244353
#define endl "\n"

bool solve(string &s, string &m, int l, int r, int i){
    if(r<l) return  true;
    if(m[l]==s[i]){
        return solve(s, m, l+1, r, i-1 ); 
    }
   else if(m[r]==s[i]){
        return solve(s, m, l, r-1, i-1); 
    }
    else {
        return false;
    }
  
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t, i;
    cin >> t;
    for(i=1;i<=t;i++){
        ll n;
        cin>>n;
        string s,m;
        cin>>s>>m;
        string ans = solve(s, m, 0, n-1, n-1)==true? "YES":"NO";
        cout<<"Case "<<i<<": "<<ans<<endl;;
    }
    return 0;
}