#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vl vector<long long>
#define mpl map<long long, long long>
#define sl set<long long>
#define sc set<char>
#define printv(a) {for(auto u:a) cout<<u<<" ";}
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define fo(i, n) for (i = 0; i < n; i++)
#define foo(i, n) for (i = 1; i <= n; i++)
#define F first
#define S second
#define endl "\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define bitcount(a) __builtin_popcount(a)  
#define bitcountll(a) __builtin_popcountll(a) 
#define ssatendra790 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// char UPPER to lower  :  ((char(s[i] | ' ')) :: char lower to UPPER : ((char(s[i] & '_'))
//  set ith bit : (a | (1<<i)) :: unset ith bit : (a & (~(1<<i))) :: toggle ith bit : (a ^ (1<<i))
#define PI 3.1415926535897932384626
const int mod = 59;
const int N = 200005, M = N;

void stndr(){
    ll n, i;
    cin>>n;
    vector<ll>a(n),b(n),pref(n),ans(n);
    fo(i,n) cin>>a[i];
    fo(i,n) cin>>b[i];
    pref[0] = a[0];
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1] + a[i];
    }
    int mx = pref[n-1];
    for(int i=0;i<n;i++){
        if(mx <= 0){
            ans[i] = -1;
            continue;
        }
        int val = b[i];
        int x = val / mx;
        val-=(mx*x);
        int ind = lower_bound(pref.begin(),pref.end(),val) - pref.begin();
        ans[i] = n*x + ind + 1;
        if(val==0) ans[i] = n*x;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
    cout<<'\n';
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        stndr();
        cout << "\n";
    }
    return 0;
}
