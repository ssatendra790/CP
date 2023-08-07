#include<bits/stdc++.h>
using namespace std;

int fun(int a, int b){
    if((b+a) > (a^b) && b>3){
        a = a+1;
        b = b+1 + a;
        b = 1+b+a;
        return a - fun(a,b);
    }
    b+=2;
    return b-a+1;
}
int main(){
    cout<<fun(4,7);
    return 0;
}