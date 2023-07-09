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
const int mod = 1e9+7;
const int N = 1e6 +1, M = 1e9+7;

//-----------------------------------| code begins |-----------------------------
ll dp[N];
ll solve(ll n){
    if(n==0) return 1;
    ll ans = 0;
    if(dp[n]!=-1) return dp[n]%mod;
    for(ll i=1;i<=6;i++){
        if(n >= i)  ans= (ans + ((solve(n-i))%mod))%mod;
    }
    return dp[n] = ans%mod;
}
void stndr(){
    ll n, i;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    ll ans = (solve(n)%mod)%mod;
    cout<<ans%mod;
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