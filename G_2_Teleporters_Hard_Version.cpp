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
    ll n, i,c;
    cin>>n>>c;
    vector<ll>cost(n+1);
    vector<pair<ll,ll>>a;
    a.pb({0,0});
    for(i=1;i<=n;i++){
        cin>>cost[i];
        a.pb({min(cost[i]+i,n-i+1 + cost[i]),i});
    }
    sort(all(a));
    vector<ll>pre(n+1,0);
    for(i=1;i<=n;i++){
        pre[i] = pre[i-1] + a[i].first;
    }
    ll ans = 0;
    for(i=1;i<=n;i++){
        ll ind = a[i].second;
        if(cost[ind] > c) break;
        ll rem = c - cost[ind] - ind;
        ll j = upper_bound(pre.begin(),pre.end(),rem) - pre.begin();
        j--;
        if(j<i){
            ans = max(j+1,ans);
        }
        else{
            rem = c - (pre[i-1] + cost[ind] + ind);
            j = upper_bound(pre.begin()+i+1,pre.end(),rem+pre[i]) - pre.begin();
            j--;
            ans = max(ans,j);
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
