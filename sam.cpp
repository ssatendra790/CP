#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;

int main(){
    ll n,m;
    cin>>n>>m;
    ll ans = 1;
    if(n<m){
        m = n;
        ans = (ans + m)%mod;
    }
    for(ll i=0;i<n;i++){
        ans = ((ans * m)%mod)%mod;
    }
    cout<<ans<<'\n';
    return 0;
}