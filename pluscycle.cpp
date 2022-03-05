#include<iostream>
using namespace std;

int main(){
    int start;
    int tmp;
    int cnt = 0;
    cin >> start;

    tmp = start;
    while(true){
        tmp = (tmp % 10) * 10 + ((tmp / 10) + (tmp % 10)) % 10;

        cnt++;
        if(tmp == start){
            break;
        }
    }
    cout << cnt;
    return 0;
}