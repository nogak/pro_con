// ビットシフト全探索
#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    for(int s = 0; s < (1 << N); s++){
        vector<int> ans;
        for(int i = 0; i < N; i++){
            if(s & (1 << i)) ans.push_back(i);
        }

        cout << "{";
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i];
            if(i != ans.size()-1) cout << ", ";
        }
        cout << "}" << endl;
    }

return 0;
}