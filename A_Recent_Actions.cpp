#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define fo(i, n) for (i = 0; i < n; i++)
#define foo(i, n) for (i = 1; i <= n; i++)
#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define bitcount(a) __builtin_popcount(a)     // for 32 bit number
#define bitcountll(a) __builtin_popcountll(a) // for 64 bit numbers
#define ssatendra790 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// char UPPER to lower  :  ((char(s[i] | ' ')) :: char lower to UPPER : ((char(s[i] & '_'))
//  ^(xor) :: |(or) :: &(and) :: << (shift left) :: >> (shift right) :: ~(binary inversion)
// power 2 use : <<
//  set ith bit : (a | (1<<i)) :: unset ith bit : (a & (~(1<<i))) :: toggle ith bit : (a ^ (1<<i))
#define PI 3.1415926535897932384626
const int mod = 59;
const int N = 200005, M = N;

//-----------------------------------| code begins |-----------------------------

void stndr(){
    ll n, i,m;
    cin>>n>>m;
    map<ll,ll>mp;
    vector<ll>v;
    fo(i,m){
        ll x;
        cin>>x;
        if(mp.find(x)==mp.end()) mp[x] = (i+1);
        if(find(all(v),x)==v.end()) v.pb(x);
    }
    ll x = n - mp.size();
    vector<ll>ans;
    fo(i,x) ans.pb(-1);
    ll j;
    if(x>=0){
        j = mp.size()-1;
    } 
    else{
        j = x+mp.size() - 1;
    }
    while(j>=0) ans.pb(mp[v[j]]),j--;
    for(auto it:ans) if(it!=0) cout<<it<<' ';
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        stndr();
        cout << "\n";
    }
    return 0;
}
