#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int testcase = 1;
    cin >> testcase;
    while (testcase--){
        ll n,x,y,z;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) x = i;
            if(a[i]==2) y = i;
            if(a[i]==n) z = i;
        }
        if((x>y and y>z) or (z>y and y > x)){
            cout<<y+1<<' '<<z+1<<'\n';
        }
        else if(abs(x-y)<abs(z-y)){
            cout<<x+1<<' '<<z+1<<'\n';
        }
        else{
            cout<<x+1<<' '<<x+1<<'\n';
        }
        // cout << "\n";
    }
    return 0;
}
