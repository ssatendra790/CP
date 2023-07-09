#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll x=0,y=0;
        for(ll i=0;i<n;i++){
            if(a[i]%2==0){
                y+=a[i];
            }
            else{
                x+=a[i];
            }
        }
        if(x<y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}