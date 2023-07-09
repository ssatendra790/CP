#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 1;
        }
        else
        {
            string ans = "1";
            ll x = a[0];
            ll curr = x;
            bool f = false;
            ll mn;
            for (ll i = 1; i < n; i++)
            {
                if (a[i] > x and curr > a[i])
                {
                    ans += '0';
                }
                else
                {
                    if (x > a[i] and f and mn != a[i])
                    {
                        ans += '0';
                        continue;
                    }
                    ans += '1';
                    if (x > a[i] and f == false)
                    {
                        f = true;
                        mn = a[i];
                    }
                }
                curr = max(curr, a[i]);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}