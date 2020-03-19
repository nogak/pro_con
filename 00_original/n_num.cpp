#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    map<char, string> mp;
    mp['0'] = "a";
    mp['1'] = "b";
    mp['2'] = "c";
    mp['3'] = "d";
    mp['4'] = "e";
    mp['5'] = "f";
    mp['6'] = "g";
    mp['7'] = "h";
    mp['8'] = "i";
    mp['9'] = "j";
    
    long num = 0;
    long loop_num = 1;
    string old_num_N;

    for(int i=1; i<N; i++){
        // loop_num *= i;
        loop_num *= N;
    }
    // cout << loop_num << endl;
    // -----------------
    for(int loop=0; loop<loop_num; loop++){
        string num_N;
        
        // N進数変換
        int n_buf = num;
        for(int i=0; i<N; i++){
            num_N += to_string(n_buf % N);
            n_buf = n_buf / N;
        }
        // 反転
        reverse(num_N.begin(), num_N.end());
        // string -> int
        // num = stoi(num_N);

        // check
        bool check_flag = true;
        bool buf_flag = false;
        for(int i=0; i<N; i++){
            // cout << num_N << endl;
            if(buf_flag && num_N.find(to_string(i)) != string::npos){
                check_flag = false;
                // cout << "test" << endl;
            }
            if(num_N.find(to_string(i)) == string::npos){
                buf_flag = true;
            }
        }
        
        /*if(check_flag){
            for(int i=0; i < N; i++){
                if((int)(num_N[i]) < (int)(old_num_N[i]))
                check_flag = false;
            }
        }*/

        if(check_flag){
            old_num_N = num_N;
            for(int i=0; i < N; i++){
                if(i != N-1){
                    cout << mp[num_N[i]];
                }else{
                    cout << mp[num_N[N-1]] << endl;
                }
            }
        }
        int end = 0;
        bool end_flag = true;
        for(int i=0; i<N-1; i++){
            end = (int)num_N[i+1] - (int)num_N[i];
            if(end != 1) end_flag = false;
        }
        if(end_flag) return 0;
        num++;
    } 
    
    return 0;
}