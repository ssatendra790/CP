#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
#define repn(i,e) for(ll i = 0; i < e; i++)
#define rep(i,e) for(ll i = 0; i <= e; i++)
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

const ll N = 200005;

ll dp[N][2][5];

string s;

ll rec(ll ind,ll changed,ll mxchar)
{
    if(ind<0)
    return 0;

    if(dp[ind][changed][mxchar]!=-1e15)
    return dp[ind][changed][mxchar];

    ll ans = -1e15;

    if(changed==0)
    {
        ll add = 1;
        repn(i,5)
        {
            if(i<mxchar)
            ans=max(ans,rec(ind-1,1,mxchar)-add);
            else
            ans=max(ans,rec(ind-1,1,i)+add);
            add*=10;
        }

    }

    ll curr = s[ind] - 'A';

    ll add = pow(10,curr);
    
    if(curr<mxchar)
    ans=max(ans,rec(ind-1,changed,mxchar) - add);
    else
    ans=max(ans,rec(ind-1,changed,curr) + add );

    return dp[ind][changed][mxchar] = ans;
}



void solve(){
    cin>>s;
    ll n = s.size();
    repn(i,n)
    {
        repn(j,2)
        {
            repn(k,5)
            dp[i][j][k] = -1e15;
        }
    }
    ll ans = rec(n-1,0,0);
    cout<<ans<<endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(ll it=1;it<=t;it++) {
        solve();
    }
    return 0;
}
// I know how to print hello world.Do you?