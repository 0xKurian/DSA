#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if('a' <= s[i] && s[i] <= 'z'){
            cout << s[i];
            continue;
        }
        if(s[i] == ')'){
            while(st.top() != '('){
                cout << st.top();
                st.pop();
            }
            if(st.top() == '(') st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    cout << '\n';
}

int main(){
    solve();
    return 0;
}
