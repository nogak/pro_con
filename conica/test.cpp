#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    std::vector<string> in;
    string input_s, s;
    getline(cin, input_s);

    stringstream ss{input_s};

    while(getline(ss, s, ' ')){
        in.push_back(s);
    }

    // for(int i=0; i < in.size(); i++){
        // cout << in[i] << endl;
    // }

    char status[2] = {D, D}; // red, while  
    bool Alice_flag = false;

    for(int i =0; i < in.size(); i++){
        if(in[i] == "RU" && status[0] == 'D'){
            status[0] = 'U';
        }else if(in[i] == "RD" && status[0] == 'U'){
            status[0] = 'D';
        }else if(in[i] == "WU" && status[1] == 'D'){
            status[1] = 'U';
        }else if(in[i] == "WD" && status[1] == 'U'){
            status[1] = 'D';
        }else{
            Alice_flag = true;
            break;
        }

    }

    if(Alice_flag){
        cout << "Alice" << endl;
    }else{
        cout << "Shimon" << endl;
        cout << status[0] << status[1] << endl;
    }

    return 0;
}