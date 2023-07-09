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
    ll n, i,m,d;
    cin>>n>>m>>d;
    vector<ll>p(n);
    vector<ll>a(m);
    map<ll,ll>mp;
    fo(i,n) {
        cin>>p[i];
        mp[p[i]] = i;
    }
    vector<pair<ll,ll>>v;
    fo(i,m) {
        ll x;
        cin>>x;
        v.pb({x,mp[x]});
    }
    ll ans = INT_MAX;
    for(i=0;i<v.size()-1;i++){
        ll ai = v[i].second;
        ll aid = ai + d;
        ll ai1 = v[i+1].second;
        if(aid>=ai1 and ai1>ai){
            ans = min(ans,(ai1-ai));
            ll belem = ai;
            ll afterelem = n-1-ai1;
            ll required = (d+1) - (ai1-ai);
            if(belem+afterelem >= required) ans = min(ans,required);
        }
        else{
            ans = INT_MAX;
            break;
        }
    }
    if(ans==INT_MAX){
        cout<<0;
        return;
    }
    cout<<ans;
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
