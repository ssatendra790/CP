#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin>>n;
        if(n==2 || n==3 || n==4){
            cout<<"Bob"<<'\n';
        }
        else{
            cout<<"Alice"<<'\n';
        }
    }
    return 0;
}