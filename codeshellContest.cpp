#include<bits/stdc++.h>
using namespace std;
const int MAX=5e4+9,K=509;
int n,k,a,b,dp[MAX][K];
vector<int> g[MAX];
long long ans=0;
void dfs(int v,int p=-1)
{
    dp[v][0]=1;
    for (auto u:g[v])
        if (u!=p)
        {
            dfs(u,v);                
            for (int i=0;i<=k;i++) ans+=1LL*dp[v][i]*dp[u][k-i-1];
            for (int i=0;i<=k;i++) dp[v][i+1]+=dp[u][i];
        }
}
int main()
{
    cin>>n>>k;
    for (int i=0;i<n-1;i++) cin>>a>>b,a--,b--,g[a].push_back(b),g[b].push_back(a);
    dfs(0);
    cout<<ans;
}