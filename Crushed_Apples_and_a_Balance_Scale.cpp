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
map<ll,ll>mp;
bool recur(ll n,ll m){
    if(mp.find(m-n)!=mp.end()){
        return true;
    }
    mp[m-n]++;
    if(n%2!=0) return false;
    return recur(n/2,m);
}


bool CheckForSequence(vector<ll>& arr, ll n, ll k){
    for (int i = n - 1; i >= 0; i--) {

        if (k >= arr[i])
            k -= arr[i];
    }
    if (k != 0)
        return false;
    else
        return true;
}


void stndr(){
    ll n, i,m;
    cin>>n>>m;
    set<ll>s;
    if(n==m){
        cout<<"YES";
        return;
    }
    while(n>=0){
        if(n%2!=0){
            break;
        }
        s.insert(n/2);
        n/=2;
    }
    vl a;
    for(auto it:s) a.push_back(it);
    if(CheckForSequence(a,a.size(),m)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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
