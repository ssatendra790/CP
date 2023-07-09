#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==1){
            v[i]--;
        }
    }
    int sum = 0;
    map<int,int>mp;
    for(int i=0;i<k;i++){
        sum+=v[i];
        mp[v[i]]++;
    }
    if(mp.size()!=k){
        sum = 0;
    }
    int i=0,j=k;
    int ans = sum;
    while(j<n){
        sum-=v[i];
        sum+=v[j];
        mp[v[i]]--;
        if(mp[v[i]]==0){
            mp.erase(v[i]);
        }
        mp[v[j]]++;
        if(mp.size()==k){
            ans = max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}