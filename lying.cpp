#include<iostream>
using namespace std;

const int MAX = 100;

int n;
string room[MAX];
int maxRow(){
    int result = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(room[i][j] == '.'){
                cnt++;
            }
            else if(room[i][j] == 'X' && cnt >= 2){
                result++;
                cnt = 0;
            }
            else if(room[i][j] == 'X')
                cnt = 0;
        }
        if(cnt >= 2)
            result++;
    }
    return result;
}

int maxCol(){
    int result = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(room[j][i] == '.')
                cnt++;
            else if(room[j][i] == 'X' && cnt >= 2){
                result++;
                cnt = 0;
            }
            else if(room[j][i] == 'X')
                cnt = 0;
        }
        if(cnt >= 2)
            result++;
    }
    return result;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> room[i];
    
    cout << maxRow() << " " << maxCol() << "\n";
    return 0;
}
//https://jaimemin.tistory.com/542