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
const int mod = 1e9+7;
const int N = 200005, M = N;
vector<ll> primes;
void SieveOfEratosthenes(ll n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            primes.pb(p);
}

void stndr(){
    ll n, i;
    cin>>n;
    vl a(n);
    fo(i,n) cin>>a[i];
    ll mx = *max_element(all(a));
    SieveOfEratosthenes(mx);
    map<vector<ll>,ll> mp;
    vector<ll> primeFactors[mx+1];
    vector<ll> primilityTest(mx+1,1);
    for(i=2;i<=mx;i++){
        if(primilityTest[i]==1){
            primeFactors[i].push_back(i);
            for(ll j=2*i;j<=mx;j+=i){
                primeFactors[j].push_back(i);
                primilityTest[j] = 0;
            }
        }
    }
    for(auto it:a){
        mp[primeFactors[it]]++;
    }
    ll ans = 1;
    for(auto it:mp){
        ans=  (ans * it.second)%mod;
    }
    cout<<ans;
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        stndr();
        cout << "\n";
    }
    return 0;
}
