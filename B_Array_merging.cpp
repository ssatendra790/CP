#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n, i;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];
    map<ll,ll>mp1,mp2;
    for(i=0;i<n;i++){
        ll x = a[i], cnt = 0;
        while(i<n && x==a[i]){
            cnt++;
            i++;
        }
        i--;
        mp1[a[i]] = max(cnt,mp1[a[i]]);
    }
    for(i=0;i<n;i++){
        ll x = b[i],cnt = 0;
        while(i<n && x==b[i]){
            cnt++;
            i++;
        }
        i--;
        mp2[b[i]] = max(cnt,mp2[b[i]]);
    }
    ll ans = 0;
    for(i=0;i<n;i++){
        ans = max(ans, mp1[a[i]]+mp2[a[i]]);

        ans = max(ans, mp1[b[i]]+mp2[b[i]]);
    }
    cout<<ans<<'\n';
    }
    return 0;
}