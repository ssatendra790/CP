#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        vector<ll> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll f=0;
        if (a[0] != 1)
        {
            f=1;
        }
        else{
        ll mxi = 1;
        for (i = 1; i < n; i++)
        {
            if (mxi < a[i])
            {
                f=1;
                break;
            }

            mxi += a[i];
        }
        }
        if(f==0) cout << "YES\n";
        else cout<<"NO\n";
    }
    return 0;
}