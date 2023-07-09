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
    ll n, i;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp;
    fo(i,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second>=3){
            cout<<0;
            return;
        }
    }
    sort(all(a));
    ll ans = INT_MAX;
    for(i=0;i<n-2;i++){
        for(ll j=i+1;j<n-1;j++){
            ll val = a[j] * 3;
            ll get = val - a[i] - a[j];
            ll ind = lower_bound(all(a),get) - a.begin();
            if((ind==i or ind==j) and ind < n-1){
                ind++;
            }
            else if((ind==i or ind==j) and ind==n-1){
                ind--;
            }
            
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
