#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef vector < int > vi;
typedef vector < ll > vl;
#define rep(i, a, b) for (int i = a; i < b; i++)
const int N = 1e5 + 10;

vector < vi > gr(N);
vi str(N);
vi vis(N, 0);
const int LOGN = 18;
int dp[N][LOGN];
vi ht(N);

void dfs(int u, int mask, int h, int par){
    vis[u] = 1;
    ht[u] = h;
    dp[u][0] = par;
    for (int i = 1; i < LOGN; i++) {
        if (dp[u][i - 1] == -1) break; 
        dp[u][i] = dp[dp[u][i - 1]][i - 1];
    }
    mask ^= str[u];
    str[u] = mask;
    for (auto v: gr[u]) {
        if (vis[v]) continue;
        dfs(v, mask, h + 1, u);
    }
}

int getLCA(int u, int v){
    if (ht[u] < ht[v]) swap(u, v);
    int diff = ht[u] - ht[v];
    for (int i = 0; i < LOGN; i++) 
        if (diff & (1 << i)) u = dp[u][i];
    if (u == v) return u;
    for (int i = LOGN - 1; i >= 0; i--) {
        if (dp[u][i] != dp[v][i]) {

            u = dp[u][i];

            v = dp[v][i];
        }
    }
    return dp[u][0];
}
 
int main(){
    int tt; tt = 1;
    while (tt--) {
        int n; cin >> n;
        rep(i, 1, n + 1){
            char x;
            cin >> x;
            str[i] ^= (1 << (x - 'a'));
        }
        rep(i, 0, n - 1){
            int x, y;
            cin >> x >> y;
            gr[x].pb(y);
            gr[y].pb(x);
        }
        memset(dp, -1, sizeof dp);
        dfs(1, 0, 0, -1);
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j) continue;
                int lca = getLCA(i, j);
                int mask1 = str[i] ^ str[lca];
                int mask2 = str[j] ^ str[lca];
                int masklca;
                masklca = str[lca] ^ (lca == 1 ? 0 : str[dp[lca][0]]); 
                int actMask = mask1 ^ mask2 ^ masklca;
                if (__builtin_popcount(actMask) == 0 || __builtin_popcount(actMask) == 1) ans++;
            }
        }
        cout << ans;
    }
}

