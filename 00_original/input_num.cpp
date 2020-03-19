// #include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*-------------------------
入力変数の量が未知の場合
[処理内容]
stringで入力して任意の文字で分割してvectorで保存
※スペースは0扱いになる
-------------------------*/

int main(){
    std::vector<int> input_v;
    string input_s, s;
    getline(cin, input_s);

    stringstream ss{input_s};

    while(getline(ss, s, ' ')){
        input_v.push_back(atoi(s.c_str()));
    }

    for(int i=0; i < input_v.size(); i++){
        cout << input_v[i] << endl;
    }

    return 0;
}