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
    ll k, i,j,x;
    cin>>k>>x;
    ll y = 2*k - 1;
    ll s = (k*(k+1))/2;
    if(x<s){
        i = 1;
        j = k-1;
        ll ans = 0;
        while(i<j){
            ll mid = (i+j) / 2;
            ll sum = (mid*(mid+1))/2;
            if(sum>x){
                j = mid-1;
            }
            else{
                i = mid;
            }
        }
        cout<<i;
    }
    else{
        i = k;
        j = 2*k - 1;
        ll ans = 0;
        while(i<j){
            ll mid = (i+j) / 2;
            ll sum = ((mid)/2)*(2*i - 3);
            if(sum>x){
                j = mid-1;
            }
            else{
                i = mid;
            }
        }
        cout<<i;
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
