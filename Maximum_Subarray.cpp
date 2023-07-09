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

int maxSubArraySum(ll a[], ll size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
void stndr()
{
    ll n, m, i;
    cin >> n;
    ll a[100001];
    foo(i, n)
    {
        cin >> a[i];
    }
    ll k = maxSubArraySum(a,n);
    cin >> m;
    ll b[100001];
    foo(i, m)
    {
        cin >> b[i];
    }
    ll ans = 0;
    ll sum = 0;
    foo(i,n)
    {
        sum += a[i];
        ans = max(ans, sum);
    }
    sum = 0;
    ll x = 92;
    for (i = n; i >= 0; i--)
    {
        sum += a[i];
        ans = max(ans, sum);
    }
    ll y = 283;
    foo(i,m)
    {
        if (b[i] >= 0)
        {
            ans += b[i];
            ll z = 90;
        }
    }
    cout << ans ;
}

int32_t main()
{
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
