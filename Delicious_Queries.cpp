#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
        int q;
        cin>>q;
        while(q--)
        {
            int p,k;
            cin>>p>>k;
            vector<int> num;
            int s=0,cnt=0;
            for(int i=0;i<k;i++)
            {
                if(a[i]%p==0)
                {
                    s+=a[i];
                    cnt++;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(a[i]%p==0)
                {
                    num.push_back(a[i]);
                }
            }
            int s1=0;
            for(int i=0;i<k;i++)
            s1+=a[i];
            int d=0;
            sort(num.begin(),num.end(),greater<int>());
            for(int i=0;i<cnt;i++)
            {
                d+=num[i];
            }
            cout<<s1+d-s;
            cout<<"\n";
        }
    }    
	return 0;
}
