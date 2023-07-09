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
    vector<ll>a(n);
    fo(i,n) cin>>a[i];
    ll mx = *max_element(all(a));
    if(n>=4){
        ll ans = n*mx;
        cout<<ans;
        return;
    }
    if(n==1){
        cout<<a[0];
        return;
    }
    if(n==2){
        ll sum1 = 2*abs(a[1]-a[0]);
        ll sum2 = a[0]+a[1];
        cout<<max({sum1,sum2});
        return;
    }
    ll s1 = a[0] + a[1] + a[2];
    ll s2 = 3*abs(a[1]-a[0]);
    ll s3 = 3*abs(a[2]-a[1]);
    ll s4 = 3*a[0];
    ll s5 = 3*a[2];
    cout<<max({s1,s2,s3,s4,s5});
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
