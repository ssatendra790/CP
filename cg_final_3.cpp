#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>& u, vector<int>& v,vector<vector<int>>& adj, int it, vector<int>& vis, int& token, int& ans) {
    vis[it] = 1;
    if (token < u[it]) return;
    token -= u[it];
    ans += v[it];
    for (auto it : adj[it]) {
        if (vis[it])continue;
            solve(u, v,adj, it, vis, token, ans);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, token;
    cin >> token >> n;
    vector<int> u(n), v(n);
    for (int i = 0; i < n; i++)  cin >> u[i];
    for (int i = 0; i < n; i++)  cin >> v[i];
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    int finalans = 0, i = 0;
    while (i < n) {
        vector<int> vis(n, 0);
        int rem = token;
        int ans = 0;
        solve(u, v,adj, i, vis, rem, ans);
        finalans = max(finalans, ans);
        i++;
    }
    cout << finalans << '\n';
    return 0;
}
