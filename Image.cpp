#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FO(i, n) for (i = 1; i <= n; i++)
#define ll long long
#define pb push_back
#define pp pop_back
#define PI 3.1415926535897932384626
const int mod = 596799;
const int N = 1e9 + 7, M = N;

void solve(){
    set<char> s;
    for (int i = 0; i < 4; i++) {
        char c;
        cin >> c;
        s.insert(c);
    }
    cout << s.size() - 1;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}