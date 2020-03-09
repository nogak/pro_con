// スタックと深さ優先探索
#include <bits/stdc++.h>
using namespace std;

void dfs(string now){
    if(now.size() == 3){
        cout << now << endl;
    }else{
        for(int select = 1; select >= 0; select--){
            string next = now + to_string(select);
            dfs(next);
        }
    }
}

int main(){
    stack<string> st;
    st.push("");
    
    while(!st.empty()){
        string now = st.top();
        // cout << now << endl;
        st.pop();
        if(now.size() == 3){
            cout << now << endl;
        }else{
            for(int select = 1; select >= 0; select--){
                string next = now + to_string(select);
                st.push(next);
            }
        }
    }
    dfs("");

return 0;
}