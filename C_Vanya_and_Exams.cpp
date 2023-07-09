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
bool cmp(const pair<ll, ll>& a,const pair<ll, ll>& b){
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second < b.second);
}
void stndr(){
    ll n, i,mx,avg;
    cin>>n>>mx>>avg;
    vector<pair<ll,ll>> v(n);
    ll sum = 0;
    for(i=0;i<n;i++){
        cin>>v[i].second;
        cin>>v[i].first;
        sum +=v[i].second;
    }
    ll x = sum/n;
    if(x>=avg){
        cout<<0;
        return;
    }
    sort(all(v),cmp);
    ll ans = 0;
    for(i=0;i<n;i++){
        if(((mx - v[i].second)+sum)/n >= avg){
            ll reqSum = avg*n;
            ans+=((reqSum - sum)*(v[i].first));
            break;
        }
        else{
            sum+=(mx-v[i].second);
            ans+=((mx-v[i].second)*(v[i].first));
        }
    }
    cout<<ans;
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
