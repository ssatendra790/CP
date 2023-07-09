#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int rec(int i,int j,string s1,string s2)
{
    int n=s1.size(),m=s2.size();

    //basecase
    if(i>=n||j>=m)
    return 0;

    //cache check
    if(dp[i][j]!=-1)
    return dp[i][j];
    //compute and return;

    int ans=0;
    if(s1[i]==s2[j]){
        ans = 1 + rec(i+1,j+1,s1,s2);
    }

    ans = max(ans,rec(i+1,j,s1,s2));

    ans=max(ans,rec(i,j+1,s1,s2));
    return dp[i][j]=ans;
}


int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size(),m=s2.size();
  memset(dp,-1,sizeof(dp));
  cout<<rec(0,0,s1,s2)<<"\n";
}