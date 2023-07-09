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

void dfs(vector<vector<char>> &v , vector<vector<int>> &vis,ll i, ll j){
    vis[i][j] = 1;
    if(i==0 && v[i+1][j]=='B' && vis[i+1][j]==0){
        dfs(v,vis,i+1,j);
    }
    else if(i==1 && v[i-1][j]=='B' && vis[i-1][j]==0){
        dfs(v,vis,i-1,j);
    }
    else if((j<v[0].size()-1 && v[i][j+1]=='B' && vis[i][j+1]==0)){
        dfs(v,vis,i,j+1);
    }
    return;
}

void stndr(){
    ll n, i;
    cin>>n;
    vector<vector<char>>v(2, vector<char>(n,'c'));
    for(i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            char c;
            cin>>c;
            v[i][j] = c;
        }
    }
    vector<vector<int>>vis1(2,vector<int>(n,0));
    vector<vector<int>>vis2(2,vector<int>(n,0));
    bool f1=false,f2=false;
    dfs(v,vis1,0,0);
    dfs(v,vis2,1,0);
    for(i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            if(vis1[i][j]==0 && v[i][j]=='B'){
                f1 = true;
                break;
            }
        }
        if(f1) break;
    }
    for(i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            if(vis2[i][j]==0 && v[i][j]=='B'){
                f2 = true;
                break;
            }
        }
        if(f2) break;
    }
    if(f1 && f2) cout<<"NO";
    else cout<<"YES";
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
