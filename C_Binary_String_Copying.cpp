#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vl vector<long long>
#define mpl map<long long, long long>
#define sl set<long long>
#define sc set<char>
#define printv(a) {for(auto u:a) cout<<u<<" ";}
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define fo(i, n) for (i = 0; i < n; i++)
#define foo(i, n) for (i = 1; i <= n; i++)
#define F first
#define S second
#define endl "\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define bitcount(a) __builtin_popcount(a)  
#define bitcountll(a) __builtin_popcountll(a) 
#define ssatendra790 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// char UPPER to lower  :  ((char(s[i] | ' ')) :: char lower to UPPER : ((char(s[i] & '_'))
//  set ith bit : (a | (1<<i)) :: unset ith bit : (a & (~(1<<i))) :: toggle ith bit : (a ^ (1<<i))
#define PI 3.1415926535897932384626
const int mod = 59;
const int N = 200005, M = N;

void stndr(){
    ll n, i,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vl first_one(n+1,n), last_zero (n+1,-1);
    for(i=n-1;i>=0;i--){
        if(s[i]=='1'){
            first_one[i] = i;
        }
        else{
            first_one[i] = first_one[i+1];
        }
    } 
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            last_zero[i+1] = i;
        }
        else{
            last_zero[i+1] = last_zero[i];
        }
    }
    set<pair<ll,ll>> sortable;
    for(i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        x = first_one[x-1];
        y = last_zero[y];
        if(x>y){
            sortable.insert({-1,-1});
        }
        else{
            sortable.insert({x,y});
        }
    }
    cout<<sortable.size();
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
