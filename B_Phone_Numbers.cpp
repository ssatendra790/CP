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
    vector<pair<ll,string>>pizza;
    vector<pair<ll,string>>girls;
    vector<pair<ll,string>>taxi;
    vector<string>friends;
    for(i=0;i<n;i++){
        ll m;
        string s;
        cin>>m>>s;
        friends.pb(s);
        ll tx=0,pz=0,gl=0;
        for(ll j=0;j<m;j++){
            string str;
            cin>>str;
            
            if(str[0]==str[1] && str[1]==str[3] && str[3]==str[4] && str[4]==str[6] && str[6]==str[7]){
                tx++;
            }
            else if(str[0]>str[1] && str[1]>str[3] && str[3]>str[4] && str[4]>str[6] && str[6]>str[7]){
                pz++;
            }
            else{
                gl++;
            }
        }
        pizza.pb({pz,s});
        girls.pb({gl,s});
        taxi.pb({tx,s});
    }
    sort(pizza.begin(),pizza.end());
    sort(girls.begin(),girls.end());
    sort(taxi.begin(),taxi.end());
    set<string>tx;
    set<string>pz;
    set<string>gl;
    ll t = taxi[taxi.size()-1].first;
    ll p = pizza[pizza.size()-1].first;
    ll g = girls[girls.size()-1].first;
    i=taxi.size()-1;
    while(i>=0 && pizza[i].first == p){
        pz.insert(pizza[i].second);
        i--;
    }
    i=girls.size()-1;
    while(i>=0 && girls[i].first == g){
        gl.insert(girls[i].second);
        i--;
    }
    i=taxi.size()-1;
    while(i>=0 && taxi[i].first == t){
        tx.insert(taxi[i].second);
        i--;
    }
    ll txxx = tx.size();
    ll glll = gl.size();
    ll pzzz = pz.size();
    cout<<"If you want to call a taxi, you should call: ";
    fo(i, n)
    {
        ll f=0;
        if (tx.find(friends[i]) != tx.end())
        {
            cout << friends[i];
            f=1;
        }
        if (txxx > 1 && f==1)
        {
            cout << ", ";
            txxx--;
        }
    }
    cout<<".\n";
    cout<<"If you want to order a pizza, you should call: ";
    fo(i, n)
    {
        ll f=0;
        if (pz.find(friends[i]) != pz.end())
        {
            cout << friends[i];
            f=1;
        }
        if (pzzz > 1 && f==1)
        {
            cout << ", ";
            pzzz--;
        }
    }
    cout<<".\n";
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    fo(i, n)
    {
        ll f=0;
        if (gl.find(friends[i]) != gl.end())
        {
            cout << friends[i];
            f=1;
        }
        if (glll > 1 && f==1)
        {
            cout << ", ";
            glll--;
        }
    }
    cout<<".\n";
}

int32_t main(){
    ssatendra790;
    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        stndr();
        // cout << "\n";
    }
    return 0;
}
