#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;

    int X[N], L[N];
    int list[N];

    for(int i=0; i<N; i++){
        cin >> X[i] >> L[i];
        list[i] = 0;
    }

    for(int i=0; i<N-1; i++){
        // check
        if(abs(X[i+1]-X[i]) < L[i]+L[i+1]){
            list[i] = 1;
        }
    }
    if(list[N-2] == 1) list[N-1] = 1;

    // for(int i=0; i<N; i++){
        // cout << list[i];
    // }
    // cout << endl;
    
    int counter = 0;
    int loop = 0;
    int ans = 0;

    for(int i=0; i<N; i++){
        if(list[i] == 1){
            counter++;
            for(int j=i+1; j<N; j++){
                if(list[j] == 1){
                    counter++;
                    if(j == N-1){
                        ans += counter/2;
                    }
                    break;
                }else{
                    if(counter == 1){
                        ans += 1;
                    }else{
                        ans += counter/2;
                    }
                    counter = 0;
                    i = j;
                    break;

                }
            }
        }
    }

    cout << N - ans << endl; 

    return 0;
}