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

void dfs(ll node, vector<vector<ll>>& adj, vector<ll>& vis,vector<ll>& tmp){
    tmp.push_back(node);
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,tmp);
        }
    }
}
void stndr(){
    ll n, i,m;
    cin>>n>>m;
    vector<vector<ll>>adj(n);
    fo(i,m){
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll p;
    cin>>p;
    map<pair<ll,ll>,bool>mp;
    fo(i,p){
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        mp[{x,y}] = true;
        mp[{y,x}] = true;
    }
    vector<ll>vis(n),tmp;
    vector<vector<ll>>ans;
    for(i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,adj,vis,tmp);
            ans.push_back(tmp);
            tmp.clear();
        }
    }
    ll res = 0;
    for(auto it:ans){
        vector<ll> vec = it;
        bool f = false;
        for(i=0;i<vec.size();i++){
            for(ll j=i+1;j<vec.size();j++){
                if(mp[{vec[i],vec[j]}]){
                    f=true;
                    break;
                }
            }
            if(f) break;
        }
        if(!f) {
            ll sz = vec.size();
            res = max(res,sz);
        }
    }
    cout<<res;
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
