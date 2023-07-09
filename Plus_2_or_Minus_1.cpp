#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll y;
        cin>>y;
        if(y==0){
            cout<<1<<'\n';
        }
        else{
            cout<<3*y<<'\n';
        }
    }
    return 0;
}