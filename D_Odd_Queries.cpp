#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, q;
        cin >> n >> q;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        ll b[n];
        b[0] = a[0];
        for (i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }
        ll s = b[n - 1];
        while (q--)
        {
            ll l, r, k,c;
            cin >> l >> r >> k;
            l--,r--;
            if (l == 0) c = b[r];
            else c = b[r] - b[l - 1];
            ll fox = s + k * (r - l + 1) - c;
            if (fox % 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}