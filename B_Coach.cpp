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

void dfs(ll node,vector<vector<ll>>& adj,vector<ll>& dum,vector<ll>& vis){
    dum.push_back(node);
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,dum,vis);
        }
    }
}

void stndr(){
    ll n, i,m;
    cin>>n>>m;
    vector<vector<ll>>adj(n);
    vector<pair<ll,ll>>edge;
    for(i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        u--;
        v--;
        edge.push_back({u,v});
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<ll>>ans;
    vector<ll> vis(n,0);
    vector<ll> dum;

    for(i=0;i<m;i++){
        if(!vis[edge[i].first]){
            dfs(edge[i].first,adj,dum,vis);
            if(dum.size() > 3){
                cout<<-1;
                return;
            }
            ans.push_back(dum);
            dum.clear();
        }
    }
    queue<ll>q;
    for(i=0;i<n;i++){
        if(!vis[i]){
            q.push(i);
        }
    }
    
    for(i=0;i<ans.size();i++){
        if(ans[i].size()==2){
            ans[i].push_back(q.front());
            if(q.empty()) break;
            q.pop();
        }
    }
    
    vector<ll>vec;
    while(!q.empty()){
        vec.push_back(q.front());
        q.pop();
        if(vec.size()==3){
            ans.push_back(vec);
            vec.clear();
        }
    }
    for(auto it:ans){
        if(it.size()!=3){
            cout<<-1;
            return;
        }
    }
    for(auto it:ans){
        for(auto itr:it){
            cout<<itr+1<<' ';
        }
        cout<<endl;
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
