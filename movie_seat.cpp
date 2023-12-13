#include<iostream>

using namespace std;

int main(){
    bool seats[10][20] = {0, };
    string str;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        seats[str[0] - 'A'][stoi(str.substr(1, str.size())) - 1] = true;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 20; j++){
            if(seats[i][j]) cout << 'o';
            else cout << '.';
        }
        cout << '\n';
    }
    
    return 0;
}