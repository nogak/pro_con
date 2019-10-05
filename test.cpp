#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M; // 参加人数，試合数
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++)
  {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  int ans[N][N]; // 1:○ 2:× 3:-

  // initialize
  for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
          ans[i][j] = 3;
      }
  }
  
  for(int i = 0; i < M; i++){
      ans[A.at(i)-1][B.at(i)-1] = 1;
      ans[B.at(i)-1][A.at(i)-1] = 2;
  }
  
  for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
          if(ans[i][j] == 1){
              cout << 'o';
          }else if(ans[i][j] == 2){
              cout << 'x';
          }else{
              cout << '-';
          }
          if(j != N-1){
              cout << ' ';
          }
      }
      cout << endl;
  }
}