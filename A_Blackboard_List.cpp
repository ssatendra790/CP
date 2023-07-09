#include <bits/stdc++.h>
using namespace std;
#define ll long long



int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        ll n, i;
    cin>>n;
    vector<ll> a(n);
    for(i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[0]<0){
        cout<<a[0];
    }
    else{
        cout<<a[n-1];
    }
        cout << "\n";
    }
    return 0;
}
