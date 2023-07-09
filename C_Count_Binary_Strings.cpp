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
const int N = 998244353, M = N;

//-----------------------------------| code begins |-----------------------------

void stndr(){
    ll n, i;
    cin>>n;
    map<pair<ll,ll>,ll>mp,mp1;
    ll ind1=1,ind2 = 1;
    for(i=1;i<=n;i++){
        ind2 = ind1;
        for(ll j=0;j<=(n-i);j++){
            ll x;
            cin>>x;
            // cout<<ind1<<' '<<ind2<<' '<<x<<endl;
            pair<ll,ll>p;
            p = {ind2,ind1};
            mp[p] = x;
            ind2++;
        }
        ind1++;
    }
    ll l = 0;
    map<pair<ll,ll>, ll>::reverse_iterator it;
    for(it=mp.rbegin();it!=mp.rend();it++){
        l = l + 1;
        if(it->second == 1) break;
        mp1[it->first] = it->second;
    }
    ll flag = 0;
    for(auto itr:mp){
        
    }
    ll ans = l;
    ll f = 0;
    for(auto itrr:mp1){
        if(itrr.second==2){
            f=1;
        }
        if(f==0){
            ans = ans + 3;
        }
        else if(itrr.second == 2){
            ans = ans + 1;
        }
        else{
            ans = ans + 2;
        }
    }
    cout<<2*ans;
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
