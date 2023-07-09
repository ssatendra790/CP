#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ssatendra790 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)


int32_t main(){
    ssatendra790;
    int testcase;
    cin >> testcase;
    while (testcase--){
        ll n, i;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;

        ll ind = n - 1;
        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                ind = i;
                break;
            }
        }
        for (i = 0; i < n; i++)
        {
            ll f = 0;
            while (i < (ind + 1) && s[i] == '1')
            {
                i++;
                f = 1;
            }
            if (f == 1)
            {
                ans++;
                i--;
            }
        }
        cout << ans<<endl;
    }
    return 0;
}
