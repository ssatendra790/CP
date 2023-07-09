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
const int N = 1e5, M = N;

//-----------------------------------| code begins |-----------------------------
vector<ll>factors[N+1];
void fact(){
    for(ll i=1;i<=N;i++)
        for(ll j=i;j<=N;j+=i)
            factors[j].pb(i);
}
void stndr(){
    ll n, i,m;
    cin>>n>>m;
    vector<ll>a(n);
    fo(i,n) cin>>a[i];
    sort(all(a));
    vector<ll>frq(m+1,0);
    ll ans = INT_MAX;
    ll count = 0;
    ll j = 0;   
    for(i=0;i<n;i++){
        for(auto it:factors[a[i]]){
            if(it>m) break;
            if(!frq[it]) count++;
            frq[it]++;
        }
        while(count == m){
            ans = min(ans,(a[i] - a[j]));
            for(auto it:factors[a[j]]){
                if(it>m) break;
                frq[it]--;
                if(frq[it]==0)count--;
            }
            j++;
        }
    }
    if(ans==INT_MAX) cout<<-1;
    else cout<<ans;
}

int32_t main(){
    ssatendra790;
    fact();
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        stndr();
        cout << "\n";
    }
    return 0;
}
