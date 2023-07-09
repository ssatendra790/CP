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

vector<ll> adj[200010];
vector<ll> vis(200010);
ll d(ll r){
  ll ans = 1 - vis[r];
  vis[r] = 1;
  for(ll c : adj[r]){
    if(vis[c] == 0) { ans += d(c); break; }
  }
  return ans;
}

void stndr(){
    ll n,m,a,b,i;
    cin>>n>>m;
    for(i=0;i<n;i++) adj[i].clear(), vis[i]=0;
    ll sq1 = int(sqrt(n)),sq;
    for(i = sq1-2;i<sq1+3;i++) if(i*i<=n) sq = i;
    vector<ll> v(n,0);
    fo(i,m){
        cin>>a>>b;
        a--;b--;
        v[a]++;
        v[b]++;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(sq*sq != n or sq < 3){
        cout<<"NO";
        return;
    }
    ll pp=0,np=0;
    fo(i,n){
        if(v[i] == 2)np++;
        else if(v[i] == 4) pp++,vis[i] = 1;
        else{
            cout<<"NO";
            return;
        }
    }
    fo(i,n){
        if(v[i] == 4){
            ll dd = d(i);
            if(dd != sq-1){
                cout<<"NO";
                return;
            }
        }
    }
    ll lst;
    fo(i,n) if(v[i] == 4) vis[i] = 0,lst = i;
    if(d(lst) != sq){
        cout<<"NO";
        return;
    }
    if(pp == sq and np + pp == n ) cout<<"YES";
    else cout<<"NO";
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
