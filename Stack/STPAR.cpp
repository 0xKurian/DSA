#include<bits/stdc++.h>
using namespace std;

void solve(){
    while(true){
        int n; cin >> n;

        if(n == 0) return;

        vector<int> a(n + 1);
        stack<int> st;
        int need = 1;

        for(int i = 1; i <= n; i++) cin >> a[i];

        for(int i = 1; i <= n; i++){
            while(!st.empty() && st.top() == need){
                need++;
                st.pop();
            }

            if(a[i] == need){
                need++;
            }

            else{
                st.push(a[i]);
            }
        }
        
        while(!st.empty() && st.top() == need){
            need++;
            st.pop();
        }

        cout << (need == n + 1 ? "yes\n" : "no\n");
    }
}

int main(){
    solve();
    return 0;
}
