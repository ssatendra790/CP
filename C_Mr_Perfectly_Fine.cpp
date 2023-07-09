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
#define printv(a) {for(auto u:a) cout<<u<<" ";}
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
    ll n, i;
    cin>>n;
    ll ans = 0;
    vector<pair<ll,string>>v;
    fo(i,n){
        ll m;
        string s;
        cin>>m>>s;
        v.push_back({m,s});
    }
    sort(all(v));
    ll ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX;
    for(auto it:v){
        if(it.second[0]=='1' and it.second[1]=='1') ans1 = min(ans1,it.first);
    }
    for(auto it:v){
        if(it.second[0]=='1' and it.second[1]=='0') ans2 = min(ans2,it.first);
    }
    for(auto it:v){
        if(it.second[1]=='1' and it.second[0]=='0') ans3 = min(ans3,it.first);
    }
    if((ans2==INT_MAX or ans3==INT_MAX) and ans1==INT_MAX){
        cout<<-1;
        return;
    }
    cout<<min(ans1,ans2+ans3);
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
