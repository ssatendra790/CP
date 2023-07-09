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
    ll n, i,q;
    cin>>n>>q;
    ll a[n];
    ll b[n][60]={0};
    fo(i,n) {
        cin>>a[i];
        ll j=0;
        while(a[i]!=0){
            if(a[i]&(1)){
                b[i][j]++;  
            }
            j++;
            a[i] = a[i]>>1;
        }
    }
    for(i=1;i<n;i++){
        for(int j=0;j<60;j++){
            b[i][j]+=b[i-1][j];
        }
    }
    while(q--){
        ll k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        ll ele_in_first = (r1-l1+1);

        ll ele_in_second = (r2-l2+1);

        ll totalSetFirst=b[r1-1][k];
        if(l1!=1){
            totalSetFirst = b[r1-1][k] - b[l1-2][k];
        }

        ll totalSetSecond = b[r2-1][k] - b[l2-2][k];

        ll totalUnsetFirst = ele_in_first - totalSetFirst;
        ll totalUnsetSecond = ele_in_second - totalSetSecond;
        cout<<((totalSetFirst*totalUnsetSecond)+(totalUnsetFirst*totalSetSecond))<<endl;
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
