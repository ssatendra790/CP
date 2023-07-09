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


void subString(string s, int n,vector<string>&v){
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
           v.pb(s.substr(i, len)) ;
}
void stndr(){
    ll n, i;
    string s1,s2;
    cin>>s1>>s2;
    n = s1.size();
    ll m  = s2.size();
    vector<string>v1;
    vector<string>v2;
    subString(s1,n,v1);
    subString(s2,m,v2);
    ll ans = INT_MAX;
    for(auto it:v1){
        for(auto itr:v2){
            if(it==itr){
                ll x = n - it.size() + m - itr.size();
                ans = min(x,ans);
            }
        }
    }
    if(ans==INT_MAX){
        cout<<(m+n);
        return;
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
