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
    int n, i;
    cin>>n;
    unordered_map<int,int>mp;
    fo(i,n) {
        int x;
        cin>>x;
        mp[(x%10)]++;
    }
    ll s=0;
    for(auto it:mp){
        s+=it.first;
        for(auto itr:mp){
            if(itr.first==it.first && itr.second<2) continue;
            s+=itr.first;
            for(auto itrr:mp){
                if(itrr.first==it.first && itrr.first!=itr.first && itrr.second<2) continue;
                if(itrr.first==itr.first && itrr.first!=it.first && itrr.second<2) continue;
                if(itrr.first==itr.first && itrr.first==it.first && itrr.second<3) continue;
                s+=itrr.first;
                if(s%10 == 3){
                    cout<<"YES";
                    return;
                }
                s-=itrr.first;
            }
            s-=itr.first;
        }
        s-=it.first;
    }
    cout<<"NO";
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
