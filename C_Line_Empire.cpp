#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,i,cnt=0,q;
 cin>>n>>q;
 vector<ll> pref1,pref2;
 for(i=1;i<=n;i++)  
 {
    cnt+=i;
    pref1.push_back(cnt);
 } 
 for(i=n-1;i>=1;i--)
 {
    cnt+=i;
    pref2.push_back(cnt);
 }
 while(q--)
 {
    ll k;
    cin>>k;
    if(k<pref1[pref1.size()-1])  
    {
        cout<<lower_bound(pref1.begin(),pref1.end(),k)-pref1.begin()+1<<endl;
    }
    else
    {
        ll ind=lower_bound(pref2.begin(),pref2.end(),k)-pref2.begin();
        cout<<n+ind+1<<endl;
    }
 }
    return 0;
}