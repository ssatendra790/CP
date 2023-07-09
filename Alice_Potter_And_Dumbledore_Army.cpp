#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // your code goes here
    int t;
    t=1;
    // cin >> t;
    while (t--){
        ll n, i, m;
        cin >> n >> m;
        ll current = 0;
        map<ll, ll> mp;
        for (i = 0; i < m; i++){
            ll a, b;
            cin >> a >> b;
            current += b;
            if (mp[a]!=0)
            {
                current += mp[a];
                mp[a] += b;
            }
            else
            {
                mp[a] += b;
            }
            cout << current << "\n";
        }
    }
    return 0;
}