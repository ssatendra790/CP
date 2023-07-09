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
#define printv(a)             \
    {                         \
        for (auto u : a)      \
            cout << u << " "; \
    }
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
const int mod = 998244353;
const int N = 200005, M = N;

ll modFact(ll n)
{
    if (n >= mod)
        return 0;
    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % mod;
    return result;
}

void stndr()
{
    ll n, i;
    cin >> n;
    vl a(n),b(n);
    fo(i, n) cin >> a[i];
    b[n - 1] = a[n - 1];
    for (i = n - 2; i >= 0; i--) b[i] = min(b[i + 1], a[i]);
    ll ans = 1,cnt = 0,mx = a[0];
    fo(i,n){
        if (a[i] == i + 1){
            if (i == 0) cnt++ , ans = (ans*2)%mod;
            else if (i == n - 1) cnt++ ,ans = (ans*2)%mod;
            else if (mx < a[i] and b[i + 1] > a[i]){
                cnt++ , ans = (ans*2)%mod;
                mx = max(mx, a[i]);
            }
        }
    }
    if (cnt == n)
        cout << ans - 1 ;
    else
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
