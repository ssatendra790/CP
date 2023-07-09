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
    string s;
    cin>>s;
    string ans="";
    n = s.size();
    for(i=0;i<n;i++){
        char c = s[i];
        ll cnt = 0;
        while(i<n && s[i]==c){
            cnt++; i++;
        }
        i--;
        if(cnt >= 2) ans+=c;
        ans+=c;
    }
    string finalans = "";
    ll m = ans.size();
    for(i=0;i<m;i++){
        if((i+3) < m && ans[i]==ans[i+1] && ans[i+2]==ans[i+3]){
            finalans+=ans[i];
            finalans+=ans[i+1];
            finalans+=ans[i+2];
            i+=3;
            continue;
        }
        finalans+=ans[i];
    }
    cout<<finalans;
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
