#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S, S2;
    long long K; 
    cin >> S;
    cin >> K;
 
    long long count = 0;
    long long count2 = 0;
    // long long count_buff = 0;
    long long l = S.length();
    long long flag = 0;
    long long flag_same = 0;
 
    for(long long i=0; i < l-1; i++){
        if(S[i] != S[i+1]){
            flag_same = 1;
            break;
        }
    }

    if(flag_same == 0){
        cout << (long long) (l * K / 2) << endl;
        return 0; 
    }

    //check start-fin
    // cout << S[0] << S[l-1] << endl;
    for(long long i=0; i < l-1; i++){
        if(S[i] == S[i+1] && S[i+1] == S[i+2]){
            count++;
            i++;
        }else if(S[i] == S[i+1]){
            count++;
        }
    }

    S2 = S + S;
    for(long long i=0; i < 2*l-1; i++){
        if(S2[i] == S2[i+1] && S2[i+1] == S2[i+2]){
            count2++;
            i++;
        }else if(S2[i] == S2[i+1]){
            count2++;
        }
    }
    if(count2 == 2*count){
        cout << count*K << endl;
    }else{
        cout << count*K + (K-1) << endl;
    }
}