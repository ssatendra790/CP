#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
typedef unsigned long long ull;
void abhinav(){
    ll n, k,i;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll>mp;
    ll x = n/k;

    fo(i,n){
        mp[s[i]]++;
    }

    string ans = "";

    fo(i,k){
        ll j = 0;
        char c;
        for(c = 'a' ; c <= 'z' && j<x ; c++,j++){
        if(mp[c]==0){
            ans+=c;
            break;
        }
        else{
            mp[c]--;
        }
      }
      if(j==x){
        ans+=c;
      }
    }
    cout<<ans;
}

int32_t main(){
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        abhinav();
        cout << "\n";
    }
    return 0;
}
