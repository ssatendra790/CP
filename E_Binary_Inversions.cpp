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
    ll cnt0=0;
    fo(i,n) {
        cin>>a[i];
        if(a[i]==0) cnt0++;
    }
    if(cnt0==0 || cnt0==n){
        cout<<(n-1);
        return;
    }
    ll c=0;
    ll ans=0;
    for(i=0;i<n;i++){
        if(a[i]==0) c++;
        else{
            ans+=(cnt0-c);
        }
    }

    ll ind=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            ind=i;
            a[i]++;
            cnt0--;
            break;
        }
    }
    c=0;
    ll ans1=0;
    for(i=0;i<n;i++){
        if(a[i]==0) c++;
        else{
            ans1+=(cnt0-c);
        }
    }
    a[ind]--;
    for(i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]--;
            break;
        }
    }
    c=0;
    ll ans2=0;
    cnt0+=2;
    for(i=0;i<n;i++){
        if(a[i]==0) c++;
        else{
            ans2+=(cnt0-c);
        }
    }
    cout<<max({ans1,ans,ans2});
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
