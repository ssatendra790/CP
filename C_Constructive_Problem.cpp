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

ll meex(vector<ll> arr, ll N){
  sort(arr.begin(), arr.end());
  ll mex = 0;
  for (ll idx = 0; idx < N; idx++){
    if (arr[idx] == mex){
      mex += 1;
    }
  }
  return mex;
}

void stndr(){
    ll n, i;
    cin>>n;
    vl a(n);
    map<ll,ll>mp;
    fo(i,n) {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll mex = meex(a,n);
    // cout<<mex<<endl;
    if(mex==n){
        cout<<"NO";
        return;
    }
    ll cnt = 0;
    for(i=0;i<n;i++){
        if((mex+1)==a[i]) cnt++;
    }
    if(cnt<2){
        cout<<"YES";
        return;
    }
    ll ind1,ind2;
    for(i=0;i<n;i++){
        if(a[i]==(mex+1)){
            ind1 = i;
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(a[i]==(mex+1)){
            ind2 = i;
            break;
        }
    }
    // cout<<ind1<<' '<<ind2<<endl;
    for(i=ind1+1;i<ind2;i++){
        if(a[i] < mex){
            if(mp[a[i]]==1){
                cout<<"NO";
                return;
            }
            mp[a[i]]--;
        }
    }
    cout<<"YES";
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        stndr();
        cout << "\n";
    }
    return 0;
}
