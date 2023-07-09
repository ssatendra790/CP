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
    vector<ll>dig(10,0);
    ll cnt0 = 0;
    ll sum = 0;
    fo(i,n){
         ll x;
         cin>>x;
         sum+=x;
         dig[x]++;
    }
    sum%=3;
    while(sum != 0) {
        fo(i,10){
            if(sum == i % 3 && dig[i] != 0){
                dig[i]--;
                n--;
                sum = 0; 
                break;
            }
        }
        if(sum == 1) {
            fo(i,10){
                if(i%3 == 2 && dig[i] != 0){
                    dig[i]--;
                    n--;
                    sum = 2;
                    break;
                }
            }
        }
        else if(sum == 2) {
            fo(i,10){
                if(i%3 == 1 && dig[i] != 0){
                    dig[i]--;
                    n--;
                    sum = 1; 
                    break;
                }
            }
        }
    }
    if(n == dig[0] && n != 0) cout << 0;
    else if(n != 0 && dig[0] != 0){
        for(int i = 9; i >= 0; i--){
            for(ll j=0;j<dig[i];j++) cout << i;
        }
    }  
    else cout << -1;
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
