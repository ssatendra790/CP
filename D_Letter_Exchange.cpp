#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define fo(i, n) for (i = 0; i < n; i++)
#define foo(i, n) for (i = 1; i <= n; i++)
#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define bitcount(a) __builtin_popcount(a)     // for 32 bit number
#define bitcountll(a) __builtin_popcountll(a) // for 64 bit numbers
#define ssatendra790 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// char UPPER to lower  :  ((char(s[i] | ' ')) :: char lower to UPPER : ((char(s[i] & '_'))
//  ^(xor) :: |(or) :: &(and) :: << (shift left) :: >> (shift right) :: ~(binary inversion)
// power 2 use : <<
//  set ith bit : (a | (1<<i)) :: unset ith bit : (a & (~(1<<i))) :: toggle ith bit : (a ^ (1<<i))
#define PI 3.1415926535897932384626
const int mod = 59;
const int N = 200005, M = N;

//-----------------------------------| code begins |-----------------------------

void stndr(){
    ll n, i;
    cin>>n;
    vector<ll>hasw,hasi,hasn;
    vector<string>v;
    for(i=1;i<=n;i++){
        string s;
        cin>>s;
        v.pb(s);
        map<char,int>mp;
        for(ll j=0;j<3;j++) mp[s[j]]++;
        for(auto it:mp){
            if(it.second>1 and it.first=='w') hasw.pb(i);
            if(it.second>1 and it.first=='i') hasi.pb(i);
            if(it.second>1 and it.first=='n') hasi.pb(i);
        }
    }
    ll sz = max({hasw.size(),hasi.size(),hasn.size()});
    cout<<sz<<'\n';
    for(i=0;i<v.size();i++){
        string s = v[i];
        map<char,int>mp;
        for(ll j=0;j<3;j++) mp[s[j]]++;
        if(mp.size()==1){
            if(mp['w']==3){
                cout<<(i+1)<<' '<<'w'<<' '<<hasi.back()<<' '<<'i'<<endl;
                cout<<(i+1)<<' '<<'w'<<' '<<hasn.back()<<' '<<'n'<<endl;
                hasi.pop_back();
                hasn.pop_back();
            }
            else if(mp['i']==3){
                cout<<(i+1)<<' '<<'i'<<' '<<hasw.back()<<' '<<'w'<<endl;
                cout<<(i+1)<<' '<<'i'<<' '<<hasn.back()<<' '<<'n'<<endl;
                hasw.pop_back();
                hasn.pop_back();
            }
            else{
                cout<<(i+1)<<' '<<'n'<<' '<<hasw.back()<<' '<<'w'<<endl;
                cout<<(i+1)<<' '<<'n'<<' '<<hasn.back()<<' '<<'i'<<endl;
                hasw.pop_back();
                hasi.pop_back();
            }
        }
        else if(mp.size()==2){
            if(mp['w']==2){
                if(mp['i']==1){
                    cout<<(i+1)<<' '<<'w'<<' '<<hasn.back()<<' '<<'n'<<endl;
                    hasn.pop_back();
                }
                else{
                    cout<<(i+1)<<' '<<'w'<<' '<<hasi.back()<<' '<<'i'<<endl;
                    hasi.pop_back();
                }
            }
            else if(mp['i']==2){
                if(mp['w']==1){
                    cout<<(i+1)<<' '<<'i'<<' '<<hasn.back()<<' '<<'n'<<endl;
                    hasn.pop_back();
                }
                else{
                    cout<<(i+1)<<' '<<'i'<<' '<<hasw.back()<<' '<<'w'<<endl;
                    hasw.pop_back();
                }
            }
            else{
                if(mp['w']==1){
                    cout<<(i+1)<<' '<<'n'<<' '<<hasi.back()<<' '<<'i'<<endl;
                    hasi.pop_back();
                }
                else{
                    cout<<(i+1)<<' '<<'n'<<' '<<hasw.back()<<' '<<'w'<<endl;
                    hasw.pop_back();
                }
            }
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
