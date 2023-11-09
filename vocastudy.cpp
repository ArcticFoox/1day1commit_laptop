#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    int arr[26] = {0, };
    int max = 0;
    int max_index = 0;
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        arr[toupper(str[i]) - 'A']++;
        if(arr[toupper(str[i]) - 'A'] > max){
            max = arr[toupper(str[i]) - 'A'];
            max_index = toupper(str[i]) - 'A';
        }
    }

    for(int i = 0; i < 26; i++){
        if(arr[i] == max){
            cout << "?";
            return 0;
        }
    }

    cout << (char)(max_index + 'A');
    
    return 0;
}