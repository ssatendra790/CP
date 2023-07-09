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
    ll n, i,m;
    cin>>n>>m;
    vector<pll> seg;
    for(i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        seg.pb({x,y});
    }
    ll q;
    cin>>q;
    vl qry(q);
    for(i=0;i<q;i++) cin>>qry[i];
    ll low = 1, high = q;
    ll ans = -1;
    while(low<=high){
        ll mid = low + (high-low)/2;
        bool flg = true;
        vl pref(n+1,0);
        for(i=0;i<mid;i++){
            pref[qry[i]]++;
        }
        for(i=1;i<=n;i++){
            pref[i] += pref[i-1];
        }
        for(i=0;i<m;i++){
            ll sz = seg[i].second - seg[i].first + 1;
            ll cntOne = pref[seg[i].second] - pref[seg[i].first - 1];
            if((cntOne*2) > sz){
                flg = false;
                break;
            }
        }
        if(!flg){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
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