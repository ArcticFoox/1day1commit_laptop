#include<iostream>
using namespace std;

bool solution(string s){
    bool answer = true;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            cnt++;
        }
        else{
            cnt--;
            if(cnt < 0){
                answer = false;
                break;
            }
        }
    }

    if(cnt){
        answer = false;
    }
    return answer;
}