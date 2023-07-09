#include <bits/stdc++.h>
using namespace std;
#define ll long long  


int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int testcase = 1;
    ll n, i,m;
    cin>>n>>m;
    vector<ll> a(n),pre(n+1);
    ll sum = 0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    pre[1] = a[0];
    for(i=2;i<=n;i++){
        pre[i] = pre[i-1] + a[i-1];
    }
    for(i=0;i<m;i++){
        ll x;
        cin>>x;
        ll ind1 = lower_bound(a.begin(),a.end(),x) - a.begin();
        ll ind2 = upper_bound(a.begin(),a.end(),x) - a.begin();
        ll cost1 = ind1 * x  - pre[ind1];
        ll cost2 = sum - pre[ind2] - (n-ind2)*x;
        cout<<(cost1+cost2)<<endl;
    }
    return 0;
}
