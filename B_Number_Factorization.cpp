#include <bits/stdc++.h>
using namespace std;
#define ll long long

void primeFactors(int n, vector<ll> &v)
{
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        v.push_back(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, s;
        cin >> n >> s;
        ll a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        ll F_ckU[n][2] = {0};
        if (a[1] >= s)
        {
            F_ckU[1][0] = a[0] * s;
            F_ckU[1][1] = a[0] * (a[1] - s);
        }
        else
            F_ckU[1][1] = a[0] * a[1];
        for (i = 2; i < n - 1; i++)
        {
            if (a[i] >= s)
            {
                if (a[i - 1] >= s)
                {
                    F_ckU[i][0] = min(F_ckU[i - 1][0] + (a[i - 1] - s) * s, F_ckU[i - 1][1] + s * s);
                    F_ckU[i][1] = min(F_ckU[i - 1][0] + (a[i - 1] - s) * (a[i] - s), F_ckU[i - 1][1] + s * (a[i] - s));
                }
                else
                    F_ckU[i][0] = min(F_ckU[i - 1][0] + a[i - 1] * s, F_ckU[i - 1][1]);
            }
        }
        ll ans = 0;
        if (a[n - 2] >= s)
        {
            ans = min(F_ckU[n - 2][0] + (a[n - 2] - s) * a[n - 1], F_ckU[n - 2][1] + s * a[n - 1]);
        }
        else
        {
            ans = min(F_ckU[n - 2][0] + a[n - 2] * a[n - 1], F_ckU[n - 2][1]);
        }
        cout << ans <<endl;
    }
    return 0;
}
