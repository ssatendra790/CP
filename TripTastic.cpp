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
const int mod = 59;
const int N = 200005, M = N;

bool isPossible(ll n, ll m, vector<vector<ll>> &a, vector<vector<ll>> &pref, ll mid, ll k)
{
    for (ll i = 1; i < n + 1; i++)
        for (ll j = 1; j < m + 1; j++)
        {
            if (a[i][j] != 0)
            {
                ll l = 1, x1 = max(l, i - mid), y1 = max(l, j - mid), x2 = min(n, i + mid), y2 = min(m, j + mid);
                ll s = pref[x1 - 1][y1 - 1] + pref[x2][y2] - pref[x2][y1 - 1] - pref[x1 - 1][y2];
                if (s >= k)
                    return true;
            }
        }
    return false;
}
void stndr()
{
    ll n, i, m, k, j,s=0;
    cin >> n >> m >> k;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1, 0)), pref(n + 1, vector<ll>(m + 1, 0));
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            s += a[i][j];
        }
    for (i = 1; i < n + 1; i++)
        for (j = 1; j < m + 1; j++)
            pref[i][j] = (pref[i - 1][j] + a[i][j] + pref[i][j - 1] - pref[i - 1][j - 1]);
    k += 1;
    if (s < k)
    {
        cout << -1;
        return;
    }
    ll l = 0;
    ll r = max(n, m);
    ll mid;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (!isPossible(n, m, a, pref, mid, k))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << l;
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
