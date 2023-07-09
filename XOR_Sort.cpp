#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
#define repn(i,e) for(ll i = 0; i < e; i++)
#define rep(i,e) for(ll i = 0; i <= e; i++)
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int main(){
    fast_cin();
    int t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        map<int, set<int>> m;
        repn(i, n)
        {
            cin >> a[i];
            b[i] = a[i];
            m[a[i]].insert(i);
        }
        sort(all(b));
        vector<pair<int, int>> ans;
        repn(i, n)
        {
            if (b[i] == a[i])
            {
                m[a[i]].erase(i);
            }
            else
            {
                if(m[b[i]].empty())
                continue;
                int find = *(m[b[i]].begin());
                ans.pb({i + 1, find + 1});
                ans.pb({find + 1, i + 1});
                ans.pb({i + 1, find + 1});
                if(!m[b[i]].empty())
                m[b[i]].erase(find);

                if(!m[a[i]].empty())
                m[a[i]].erase(i);

                m[a[i]].insert(find);
                swap(a[i], a[find]);
            }
        }
        cout << ans.size() << "\n";
        for (auto x : ans)
        {
            cout << x.fi << " " << x.se << "\n";
        }
    }
    return 0;
}