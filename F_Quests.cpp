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

bool isPossible(ll mid,ll n,vector<ll>& v,ll c,ll d){
    ll sum=0;
    for(ll i=0;i<min(mid,n);i++){
        sum+=v[i];
    }
    sum = (d/mid) * sum;
    for(ll i=0;i<min(d%mid,n);i++){
        sum+=v[i];
    }
    return sum>=c;
}
void stndr(){
    ll n, i,c,d;
    vector<ll>v(n);
    cin>>n>>c>>d;
    fo(i,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll l=0;
    ll r=1e18;
    while(l<r){
        ll mid = (l+r+1)/2;
        if(isPossible(mid,n,v,c,d)){
            l=mid;
        }   
        else{
            r=mid-1;
        }
    }
    if(l==0){
        cout<<"Impossible";
    }
    else if(l==N){
        cout<<"Infinity";
    }
    else{
        cout<<l-1;
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
