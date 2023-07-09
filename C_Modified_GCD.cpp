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
void getCommonDivisors(ll a,ll b,vector<ll>& v){
    set<ll>s1,s2;
    for(ll i=1;i<=(sqrt(a));i++){
        if(a%i==0){
            if(a/i==i){
                s1.insert(i);
            }
            else{
                s1.insert(i);
                s1.insert(a/i);
            }
        }
    }
    for(ll i=1;i<=(sqrt(b));i++){
        if(b%i==0){
            if(b/i==i){
                s2.insert(i);
            }
            else{
                s2.insert(i);
                s2.insert(b/i);
            }
        }
    }
    for(auto it:s1){
        if(s2.find(it)!=s2.end()){
            v.pb(it);
        }
    }
}
void stndr(){
    ll n, i;
    ll a,b,q;
    cin>>a>>b;
    vector<ll>divisors;
    getCommonDivisors(a,b,divisors);
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll i=0,j=divisors.size()-1;
        ll ans = -1;
        while(i<=j){
            ll mid = i + (j-i)/2;
            if(divisors[mid]>=l and divisors[mid]<=r){
                ans = divisors[mid];
                i = mid+1;
            }
            if(divisors[mid]<l){
                l = mid+1;
            }
            else if(divisors[mid]>r){
                r = mid-1;
            }
        }
        cout<<ans<<endl;
    }
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        stndr();
        // cout << "\n";
    }
    return 0;
}
