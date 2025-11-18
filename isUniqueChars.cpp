#include <iostream>
using namespace std;

bool isUniqueChars(string str){

    if(str.length() > 128) return false; //ASCII 문자의 개수(128) 보다 많은 입력을 받으면 중복이 반드시 존재
    bool char_set[128] = {false};
    for(int i =0; i< str.length(); i++){
        int val = str[i]; // 문자열의 i번째 문자를 ASCII 값으로 변환하여 val에 저장
        if(char_set[val]){ // 해당 문자가 이미 등장 했는지 확인
            return false; // 중복된 문자가 발견되면 false 반환
        }
        char_set[val] = true; // 처음 등장 시 해당 문자의 값을 true로 설정
    }
    return true;
}


int main() {

    string n;
    cout << "문자열을 입력해주세요: ";
    cin >> n;

    if(isUniqueChars(n)){
        cout << "모든 문자가 유일합니다." << endl;
    } else {
        cout << "중복된 문자가 있습니다." << endl;
    }

}