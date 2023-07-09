#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool solve(ll n, ll m){
    if(n==m){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    return solve(n/3,m) || solve((2*n) / 3 ,  m);
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        if(solve(n,m)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}