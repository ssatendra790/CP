#include<bits/stdc++.h>
using namespace std;

long long solve(vector<long long> a, long long n){
    vector<long long>b=a;
    map<long long,vector<long long>>m;
    for(int i=0;i<n;i++){
        m[a[i]].push_back(i);
    }
    long long cost=0;
    for(int i=0;i<n;i++){
        cost+=a[i];
        for(auto& it:m[b[i]]){
            a[it]=ceil((double)a[it]/(double)2);
        }
    }
    return cost;
}


int main(){
    long long n;    
    cin>>n; 
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int>mp;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x = a[i];
        int j = 0;
        for(;j<mp[x];j++){
            x = ceil((double)x/2);
        }
        if(j==0) mp[x]++;
        ans+=x;
    }
    cout<<ans;
    return 0;
}