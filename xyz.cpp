#include <bits/stdc++.h>
using namespace std;

long long stoc(const std::string& str) {
    std::istringstream iss(str);
    long long num;
    iss >> num;
    return num;
}

std::string lts(long long num) {
    std::ostringstream oss;
    oss << num;
    return oss.str();
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    stack<string> st;
    long long i = 0 , ans = 0;
    while (i < s.length()){
        if (s[i] == '('){
            st.push("(");
        }
        else{
            if (st.top() == "("){
                st.pop();
                st.push("1");
            }
            else{
                long long count = 0;
                while (st.top() != "("){
                    count += stoc(st.top());
                    st.pop();
                }
                st.pop();
                st.push(lts(2 * count));
            }
        }
        i++;
    }
    while (!st.empty()){
        ans += stoc(st.top());
        st.pop();
    }
    cout<<ans<<'\n';
    return 0;
}