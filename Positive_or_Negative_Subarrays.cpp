#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++) cin >> a[i];
        ll p = 0;
        ll neg = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == -1)
            {
                neg += (i+1);
            }
            else
            {
                p += (i+1);
            }
        }

        cout << abs(neg - p)<<'\n';
    }
    return 0;
}