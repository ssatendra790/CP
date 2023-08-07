#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int testcase = 1;
    cin >> testcase;
    while (testcase--){
        ll n, i;
        cin >> n;
        ll ans = 1, cnt = 0;
        while(n%ans==0){
            ans++;
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
