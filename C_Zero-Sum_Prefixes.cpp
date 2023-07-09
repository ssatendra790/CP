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
    vector<ll>v;
    fo(i,n) {
        cin>>a[i];
        if(a[i]==0) v.pb(i);
    }
    ll ans = 0;
    ll sum = 0;
    if(v.size()==0){
        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum==0) ans++;
        }
        cout<<ans;
        return;
    }
    ll firstzero = v[0];
    ll lastzero = v[v.size()-1];
    for(i=0;i<firstzero;i++){
        sum+=a[i];
        if(sum==0) ans++;
    }
    unordered_map<ll,ll>mp;
    for(i=0;i<v.size();i++){
        ll ind1 = v[i];
        ll ind2=0;
        if(i==v.size()-1) ind2=n;
        else ind2 = v[i+1];
        sum =0;
        for(ll j=ind1;j<ind2;j++){
            sum+=a[j];
            mp[sum]++;
        }
        ll mx = 0;
        for(auto it:mp){
            mx = max(mx,it.second);
        }
        mp.clear();
        ans+=mx;
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
