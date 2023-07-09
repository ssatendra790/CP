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
    ll a[n];
    ll f=0;
    ll ind=-1;
    fo(i,n) {
        cin>>a[i];
        if(a[i]==1) {
            f=1;
        }
        if(gcd(a[i],(i+1))==1) ind=i;
    }
    
    if(n==1 && f!=1) {
        cout<<1;
        return;
    }
    else if(f==1){
        cout<<0;
        return;
    }
    ll ovrgcd = gcd(a[0], a[1]);
    for (i = 2; i < n; i++)
    {
        ovrgcd = gcd(ovrgcd, a[i]);
    }
    if (ovrgcd == 1)
    {
        cout << 0;
        return;
    }
    ll ans=n;
    for(i=n-1;i>0;i--){
        if(gcd(a[i],(i+1))==1 or gcd(gcd(a[i],(i+1)),ovrgcd)==1) ans=min(ans,n-i);
        for(ll j=i-1;j>=0;j--){
            if(gcd(gcd(a[i],(i+1)),gcd(a[j],(j+1)))==1){
                ans = min(ans,(n-i+n-j));
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