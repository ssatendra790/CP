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
    ll n, m, k;
    cin >> n >> m;
    vector<pair<int, int>> a(n, {0, 1});    
    for (auto &i : a)
        cin >> i.first; 
    cin >> k;
    vector<pair<int, int>> b(k, {0, 1});
    for (auto &i : b)
        cin >> i.first;
    bool poss = true;
    while (a.size() && b.size()){
        auto A = a.back();
        a.pop_back();
        auto B = b.back();
        b.pop_back();

        if (A.first == B.first){
            int cmn = min(A.second, B.second);
            A.second -= cmn;
            B.second -= cmn;
            if (A.second)
                a.push_back(A);
            if (B.second)
                b.push_back(B);
        }
        else if (A.first > B.first)
        {
            b.push_back(B);
            A.second--;
            if (A.second)
                a.push_back(A);
            if (A.first % m != 0)
            {
                poss = false;
                break;
            }
            a.push_back({A.first / m, m});
        }
        else
        {
            a.push_back(A);
            B.second--;
            if (B.second)
                b.push_back(B);
            if (B.first % m != 0)
            {
                poss = false;
                break;
            }
            b.push_back({B.first / m, m});
        }
        if (!poss || a.size() || b.size()){
                 cout << "No";
                 return;
        }
           
        else
            {
                cout << "Yes";
                 return;
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
            cout << "\n";
        }
        return 0;
    }
