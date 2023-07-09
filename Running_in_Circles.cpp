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
    ll n, i,l;
    cin>>l>>n;
    vector<pair<ll,char>>v;
    ll cnt=0;
    fo(i,n){
        ll x;
        char ch;
        cin>>x>>ch;
        if(ch=='C') cnt++;
        v.pb({x,ch});
    }
    if(cnt==n){
        ll sum=0;
        for(auto it:v){
            sum+=it.first;
        }
        cout<<sum/l;
    }
    else{
        ll sum=0;
        ll ans = 0,f=0;
        char ch = v[0].second;
        for(i=0;i<n;i++){
            while(i<n && v[i].second==ch){
                if(ch=='C') sum+=v[i].first;
                else sum -= v[i].first;
                i++;
                f=1;
            } 
            if(abs(sum)>=l) {
                ans+=(abs(sum))/l;
                if(ch=='A') sum = -1*(abs(sum))%l;
                else sum = abs(sum)%l;
            }
            if(f==1){
                ch=v[i].second;
                i--;
            }
        }
        cout<<ans;
    }

}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    int t=1;
    cin >> testcase;
    while (testcase--)
    {
        cout<<"Case #"<<t<<": ";
        stndr();
        cout << "\n";
        t++;
    }
    return 0;
}
