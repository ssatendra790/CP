// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 

// int main(){
//     ll n;
//     cin>>n;
//     map<ll,ll>mp;
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         mp[x]++;
//     }
//     ll ans = INT_MAX;
//     for(auto it:mp){
//         ans = min(ans,abs(it.second - it.first));
//     }
//     cout<<ans+1<<'\n';
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// const ll mod = 1e9+7;

// ll modFact(ll n, ll p){
//     if (n >= p)
//         return 0;
 
//     ll result = 1;
//     for (ll i = 1; i <= n; i++)
//         result = (result * i) % p;
//     return result;
// }

// int main(){
//     ll d;
//     cin>>d;
//     ll x = 1;
//     for(ll i=1;i<=d;i++){
//         x = (x*2)%mod;
//     }
//     x--;
//     ll ans = (modFact(x,mod))%mod;
//     cout<<ans<<'\n';
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1e9+7;
ll rec(ll ind,ll s,ll tot,vector<ll>& a)
{
    if(ind==a.size())
    {
        if(2*s==tot)
        return 1;
        else
        return 0;
    }
    ll ans = 0;
    ll take = rec(ind+1,s+a[ind],tot,a);
    ll nottake = rec(ind+1,s,tot,a);
    ans  = take;
    ans%=mod;
    ans+=nottake;
    ans%=mod;
    return ans;
}


int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll s = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s&1)
    {
        cout<<"0"<<endl;
    }
    else{
        ll ans = rec(0,0,s,a);
        cout<<ans<<endl;
    }
    return 0;
}