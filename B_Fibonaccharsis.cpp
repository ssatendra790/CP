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

vl a(30);
vl b(30);

void stndr(){
    ll n, i,k;
    cin>>n>>k;
    b[1] = 1 , a[0] = 1, a[1] = 0;

    for(ll i = 2; i < 30 ;i++){
        b[i] = b[i-1] + b[i-2];
    }
    for(ll i = 2; i < 30 ;i++){
        a[i] = a[i-1] + a[i-2];
    }

    if(k>29){
        cout<<0;
    }
    else{
    ll ans = 0;
    for(i=0;i<=n;i++){
        if(a[k]*i > n){
            break;
        }
        if((n-a[k]*i)%b[k]==0){
            ans++;
        }
    }
    cout<<ans;
    }
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
