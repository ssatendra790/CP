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
    ll n, i,j;
    cin>>n;
    vector<vector<ll>>hap(n,vector<ll>(3));
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>hap[i][j];
        }
    }
    vector<vector<ll>>dp(n,vector<ll>(4,0));
    dp[0][0] = max(hap[0][1],hap[0][2]);
    dp[0][1] = max(hap[0][0],hap[0][2]);
    dp[0][2] = max(hap[0][1],hap[0][0]);
    dp[0][3] = max({hap[0][1],hap[0][2],hap[0][0]});
    for(i=1;i<n;i++){
        for(ll last = 0; last < 4; last++){
            dp[i][last] = 0;
            for(ll task = 0;task<3;task++){
                if(last!=task){
                    ll point = hap[i][task] + dp[i-1][task];
                    dp[i][last] = max(dp[i][last],point); 
                }
            }
        }
    }
    cout<<dp[n-1][3];
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
