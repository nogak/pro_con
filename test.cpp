#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++)
  {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  ans[N][M]; // 1:○ 2:× 3:-
  for (int i; i <= N; i++){
    for (int j; j <= N; j++){
      ans[i][j] = 3;
    }
  }
}