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
    ll n, i,k;
    cin>>n>>k;
    vl a(n);
    map<ll,ll>mp;
    fo(i,n) {
        cin>>a[i];
        mp[a[i]]++;
    }
    vl pr(n), sf(n);
    pr[0] = 1, sf[n-1] = 1;
    for(i=1;i<n;i++) {
        pr[i] = pr[i-1];
        if(a[i]==a[0]) pr[i]++;
    }
    for(i=n-2;i>=0;i--){
        sf[i] = sf[i+1];
        if(a[i]==a[n-1]) sf[i]++;
    }
    if(a[0]==a[n-1] and pr[n-1]>=k){
        cout<<"YES";
        return;
    }
    fo(i,n){
        if(pr[i]>=k and sf[i]>=k){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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
