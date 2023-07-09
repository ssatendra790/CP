#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, i;
    cin >> n;
    vector<ll> a(n), b(n);
    ll c0 = 0, c1 = 0, cnt0 = 0, cnt1 = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            c0++;
        else
            c1++;
    }
    for (i = 0; i < n; i++){
        cin >> b[i];
        if (b[i] == 0)
            cnt0++;
        else
            cnt1++;
    }
    ll ans = min(abs(c0 - cnt0), abs(cnt1 - c1)) + 1;
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            cnt++;
    }
    cout << min(ans, cnt);
}

int32_t main()
{
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
