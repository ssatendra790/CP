#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, i;
    ll an=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
          cin>>a[i];
    }
    sort(a,a+n);

    ll m = a[0];

    ll u = (2*m) - 1;

    ll v = 2*m;
    
    for(i=0;i<n;i++){
        if(a[i]>=v){



            if(a[i]%u == 0){
                an+=(a[i]/u)-1;
            }


            else{
                an+=a[i]/u;
            }


        }

    }
    cout<<an<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}