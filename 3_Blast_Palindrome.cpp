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

void stndr()
{
    ll n, i;
    cin >> n;
    string s;
    cin >> s;
    if ((n-1)%3==0){
        cout << "YES";
        return;
    }
    map<char, vector<ll>> mp;
    for (i = 0; i < n; i++) mp[s[i]].pb(i);
    for (auto it : mp){
        if (it.second.size() == 1 and (it.second[0] % 3 == 0 and abs(n - it.second[0] - 1) % 3 == 0)) {
            cout << "YES";
            return;
        }
        for (i = 0; i < it.second.size() - 1; i++){
            if (it.second[i] % 3 == 0 && abs(it.second[i + 1] - it.second[i] - 1) % 3 == 0 && abs(n - it.second[i + 1] - 1) % 3 == 0){
                cout << "YES";
                return;
            }
        }
    }

    for(char x='a';x<='z';x++){
            ll pos=n + 1;
            ll end=-1;
            for(i=0;i<n;i++){
                if(s[i]==x and i%3==0){
                    pos=i;
                    break;
                }
            }
            i = n-1;
            while(i>=0){
                ll cnt=n-i;
                cnt-=1;
                if(s[i]==x and cnt%3==0){
                    end = i;
                    break;
                }
                i--;
            }
            if(pos < end){
                cout<<"YES";
                return;
            }
    }
    cout << "NO";
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
