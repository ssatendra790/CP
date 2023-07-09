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

string solve(string s,string x){
    ll n = s.size();
    for(ll i=0;i<n;i++){
        if((s[i]=='0' and x[i]=='0') or (s[i]=='1' and x[i]=='1')){
            x+='0';
        }
        else if((s[i]=='0' and x[i]=='1') or (s[i]=='1' and x[i]=='0')){
            x+='1';
        }
    }
    return x;
}
void stndr(){
    ll n, i;
    cin>>n;
    string s;
    cin>>s;
    string x="",y="";
    x+='0';
    y+='1';
    string s1,s2;
    s1 = solve(s,x);
    s2 = solve(s,y);
    ll cnt1=0,cnt2=0;
    for(i=0;i<n;i++){
        if(s1[i]=='1') cnt1++;
        if(s2[i]=='1')  cnt2++;
    }
    cout<<(max(cnt1,cnt2));
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