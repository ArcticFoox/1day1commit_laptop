#include<iostream>

using namespace std;

int main(){
    string small = "roygbiv";
    string big = "ROYGBIV";
    bool small_visit[7] = {0, };
    bool big_visit[7] = {0, };
    int small_cnt = 0;
    int big_cnt = 0;
    int n;
    string str;

    cin >> n;
    cin >> str;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 7; j++){
            if(big[j] == str[i] && !big_visit[j]){
                big_visit[j] = true;
                big_cnt++;
            }
        }

        for(int j = 0; j < 7; j++){
            if(small[j] == str[i] && !small_visit[j]){
                small_visit[j] = true;
                small_cnt++;
            }
        }
    }

    if(small_cnt == 7 && big_cnt == 7){
        cout << "YeS";
    }
    else if(small_cnt == 7){
        cout << "yes";
    }
    else if(big_cnt == 7){
        cout << "YES";
    }
    else{
        cout << "NO!";
    }

    return 0;
}