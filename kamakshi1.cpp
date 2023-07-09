#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]) break;
            if(a[j]==a[i]) cnt++;
        }
        int j = i-1;
        int h = a[i];
        ll cnt1 = 0;
        while(j>=0){
             cnt1++;
             if(a[j]>h) break;
             j--;
        }
        ans[i] = cnt+cnt1;
    }
    for(auto it:ans) cout<<it<<' ';
    cout<<endl;
    return 0;
}