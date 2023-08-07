#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vl vector<long long>
#define mpl map<long long, long long>
#define sl set<long long>
#define sc set<char>
#define printv(a) {for(auto u:a) cout<<u<<" ";}
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define fo(i, n) for (i = 0; i < n; i++)
#define foo(i, n) for (i = 1; i <= n; i++)
#define F first
#define S second
#define endl "\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define bitcount(a) __builtin_popcount(a)  
#define bitcountll(a) __builtin_popcountll(a) 
#define ssatendra790 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// char UPPER to lower  :  ((char(s[i] | ' ')) :: char lower to UPPER : ((char(s[i] & '_'))
//  set ith bit : (a | (1<<i)) :: unset ith bit : (a & (~(1<<i))) :: toggle ith bit : (a ^ (1<<i))
#define PI 3.1415926535897932384626
const int mod = 59;
const int N = 200005, M = N;

void stndr(){
    ll n, i;
    cin>>n;
    vl a(n);
    ll nsum = 0 , psum = 0, neg = 0;
    fo(i,n) {
        cin>>a[i];
        if(a[i]<0){
            neg++;
            nsum+=a[i];
        }
        else{
            psum+=a[i];
        }
    }

    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(neg==0){
        cout<<n-1<<endl;
        for(i=1;i<n;i++){
            cout<<i+1<<' '<<i<<endl;
        }
        return;
    }
    if(neg==n){
        cout<<n-1<<endl;
        for(i=n-2;i>=0;i--){
            cout<<i+1<<' '<<i+2<<endl;
        }
        return;
    }
    vector<pair<ll,ll>> ans;
    ll mx = 0, mxpos;
    for(i=0;i<n;i++){
        if(mx < abs(a[i])){
            mx = abs(a[i]);
            mxpos = i;
        }
    }

    if(a[mxpos] < 0){
        vector<pair<ll,ll>> ans;
        while((a[n-1] + a[n-2]) > 0 ){
            a[n-1] += a[mxpos];
            ans.push_back({n,mxpos+1});
        }
        for(i=n-2;i>=0;i--){
            if(a[i]<=0){
                a[i]+=a[i+1];
                ans.push_back({i+1,i+2});
            }
            else{
                while(a[i]>a[i+1]){
                    a[i]+=a[i+1];
                    ans.push_back({i+1,i+2});
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<' '<<it.second<<endl;
        }
    }
    else{
        vector<pair<ll,ll>> ans;
        while(a[0] + a[1] < 0 ){
            a[0] += a[mxpos];
            ans.push_back({1,mxpos+1});
        }
        for(i=1;i<n;i++){
            if(a[i]>=0){
                a[i]+=a[i-1];
                ans.push_back({i+1,i});
            }
            else{
                while(a[i] < a[i-1]){
                    a[i]+=a[i-1];
                    ans.push_back({i+1,i});
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<' '<<it.second<<endl;
        }
    }
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        stndr();
        // cout << "\n";
    }
    return 0;
}
