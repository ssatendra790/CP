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
    ll n, i,m;
    cin>>n>>m;
    if(n==m){
        fo(i,n) cout<<"10";
        return;
    }
    if(m<n-1 or n<(ceil((double)m/2)-1)){
        cout<<"-1";
        return;
    }
    if(n>m){
        fo(i,n-1){
            cout<<"01";
        }
        cout<<"0";
    }
    else{
        if(m-1 == n){
            fo(i,m-1){
                cout<<"10";
            }
            cout<<1;
            return;
        }
        ll x = m-n-1;
        string ans = "";
        fo(i,x-1){
            ans+="110";
        }
        fo(i,n-x+1){
            ans+="10";
        }
        if((m+n)==ans.size()){
            cout<<ans;
            return;
        }
        if((m+n) - ans.size() == 1){
            ans+="1";
        }
        else{
            ans+="11";
        }
        cout<<ans;
    }
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
