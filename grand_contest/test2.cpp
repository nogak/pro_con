#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string S;
    long long K; 
    cin >> S;
    cin >> K;

    int count = 0;
    int count_buff = 0;
    int l = S.length();
    int flag = 0;

    //check start-fin
    // cout << S[0] << S[l-1] << endl;
    if(S[0] == S[l-1] && l != 2){
        if(S[1] == S[l-2]){
            count++;
            flag = 1;
        }
        count++;
    }else if(S[0] == S[l-1]){
        count++;
    }

    for(int i=1; i < l-2; i++){
        if(S[i] == S[i+1]){
            count_buff++;
        }
    }
    if(count_buff % 2 == 1){
        count_buff = count_buff/2+1;
    }else{
        count_buff + count_buff/2;
    }
    
    if(flag == 1){
        count = count + count_buff - 1;
    }else{
        count = count + count_buff;
    }

    // cout << l << endl;
    cout << count*K << endl;

}