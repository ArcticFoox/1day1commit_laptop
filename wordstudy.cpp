#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int alphabet[26] = { 0, };
    string str;
    int max = 0, index = 0, cnt = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i]<97) alphabet[str[i] - 65]++; 
        else alphabet[str[i] - 97]++; 
    }

    for(int j = 0; j < 26; j++){
        if(max < alphabet[j]){
            max = alphabet[j];
            index = j;
            cnt = 0;
        }
    }

    for(int i = 0; i < 26; i++){
        if(max==alphabet[i])cnt++;
    }

    if(cnt > 1){
        cout << "?";
    }
    else{
        cout << (char)(index + 'A');
    }
    return 0;
}