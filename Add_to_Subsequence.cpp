#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<int> b(n);
        b[0]=a[0];
        int flag=1;
        for(int i=1;i<n;i++)
        {
            if(a[i] + a[i-1] >=0 && a[i-1]  - a[i] >=0)
            {
                flag = 0;
                break;
            }
            else
            b[i] = a[i] + a[i-1];
        }
        if(flag==1)
        {
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";
        }
        else
        cout<<"-1\n";
    }
}
