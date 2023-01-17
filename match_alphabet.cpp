#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s){
    stack<char> match;
    
    for(int i = 0; i < s.size(); i++){
        if(match.empty() || (match.top() != s[i])){
            match.push(s[i]);
        }
        else{
            match.pop();
        }
    }
    if(match.empty()){
        return 1;
    }
    else{
        return 0;
    }
}