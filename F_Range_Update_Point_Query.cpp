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

ll dig(ll n){
    ll sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void stndr(){
    ll n, i,q;
    cin>>n>>q;
    vector<ll>a(n+1);
    set<ll>s;
    for(i=1;i<=n;i++) {
        cin>>a[i];
        if((a[i]>9) != 0){
            s.insert(i);
        }
    }
    while(q--){
        ll qu;
        cin>>qu;
        if(qu==2){
            ll x;
            cin>>x;
            cout<<a[x]<<'\n';
        }
        else{
            ll l,r;
            cin>>l>>r;
            ll start = l;
            while(!s.empty()){
                auto it = s.lower_bound(start);
                if(it == s.end() or *it > r) break;
                a[*it] = dig(a[*it]);
                ll x = *it;
                s.erase(x);
                if(a[x] > 9) s.insert(x);
                start = x + 1;
            }  
        }
    }
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        stndr();
        // cout << "\n";
    }
    return 0;
}
