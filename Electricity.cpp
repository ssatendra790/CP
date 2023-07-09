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
    ll n, i;
    cin>>n;
    ll a[n];
    fo(i,n) cin>>a[i];
    vector<pair<ll,ll>>v;
    fo(i,n-1){
        ll l,r;
        cin>>l>>r;
        v.pb({l,r});
    }
    ll ans = 0;
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        ll cnt=0,dum=0;
        for(ll j=0;j<n-1;j++){
            if(v[j].first==(i+1) && a[v[j].second - 1]<a[i]){
                cnt++;
                cnt+=mp[a[v[j].second -1]];
            }
            if(v[j].second==(i+1) && a[v[j].first - 1]<a[i]){
                cnt++;
                cnt+=mp[a[v[j].first -1]];
            }
        }
        mp[a[i]]+=cnt;
        ans=max(ans,(cnt));
    }
    cout<<ans;
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    cin >> testcase;
    int t=1;
    while (testcase--)
    {
        cout<<"Case #"<<t<<": ";
        stndr();
        cout << "\n";
        t++;
    }
    return 0;
}
