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


ll sqroot(ll n){
    ll l=0,r=2000000000;
    while(l<r){
        ll mid = (l+r)/2;
        if(mid*mid > n){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return l-1;
}
void stndr(){
    ll n,i;
    ll l,r;
    cin>>l>>r;
    ll a = sqroot(l);
    ll b = sqroot(r);
    ll ans = 0;
    if(a == b){
        fo(i,3){
            if(a*(a+i) >=l && a*(a+i)<=r) ans++;
        }
    }
    else{
        ans = (b - a - 1)*3;
        fo(i,3){
            if(a*(a+i)>=l && a*(a+i)<=r) ans++;
            if(b*(b+i)>=l && b*(b+i)<=r) ans++;
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
