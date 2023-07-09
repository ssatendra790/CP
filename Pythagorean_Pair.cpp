#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        ll n, i, p = 0;
        cin >> n;
        while (n % 2 == 0){
            p++;
            n /= 2;
        }
        if (p % 2 == 1)
        {
            p--;
            n *= 2;
        }
        int f = 0;
        for (i = 0; i * i <= n; i++)
        {
            ll o = n - i * i;
            ll m = sqrt(o);
            if (m * m == o)
            {
                ll an1 = i<<p/2;
                ll an2 = m<<p/2;
                cout << an1 << " " << an2 << '\n';
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << -1<<endl;
    }
    return 0;
}
