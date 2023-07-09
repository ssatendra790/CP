#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int num = -n;
    int ans = 0;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            int g = __gcd(i,j);
            if( i!=j and g > 1){
                ans+=(4*g);
            }
        }
    }
    cout<<ans/2;
    return 0;
}