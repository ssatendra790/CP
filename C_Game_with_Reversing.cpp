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

void stndr(){
    ll n, cnt = 0, i;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s2;
    reverse(all(s3));
    if(s1==s2){
        cout<<0;
        return;
    }
    if(s1==s3){
        cout<<2;
        return;
    }
    ll cnt1 = 0, cnt2 = 0;
    for(i=0;i<n;i++){
        if(s1[i]!=s2[i]) cnt1++;
        if(s1[i]!=s3[i]) cnt2++;
    }
    if (cnt2 % 2 == 0) cout << min(2 * cnt1 - (cnt1 % 2), 2 * cnt2 - 1);
    else cout << min(2 * cnt1 - (cnt1 % 2), 2 * cnt2);
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
