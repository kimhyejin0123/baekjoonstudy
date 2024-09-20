//
// Created by hjin0 on 2024-09-20.
//
#include <iostream>
#include <string>

using namespace std;

int main(){
    int result = 0;
    string input;
    bool minus = false;

    string num ; //더하거나 빼야하는 수

    cin >> input ;

    for (int i=0; i<= input.size(); i++){


        if( input[i]=='-' || input[i]=='+' || i == input.size()){
            if(minus){
                result -= stoi(num);
                num = ""; //num 초기화
            }
            else{ //minus가 false인 상태라면
                result += stoi(num);
                num = "";
            }
        }
        else{ //대상 숫자를 num에다 추가하기
            num += input[i];
        }
        if(input[i] == '-'){ // 그 뒤에 들어오는 +를 -로 바꾸어 계속 뺀다 그러기 위해 minus를 true로 설정
            minus = true;
        }

    }
    cout << result;

    return 0;
}
