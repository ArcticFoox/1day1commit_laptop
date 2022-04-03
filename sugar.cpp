#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    
    while(n >= 0){
        if(n % 5 == 0){
            sum += (n / 5);
            cout << sum;
            return 0;
        }
        n -= 3;
        sum++;
    }
    cout << -1;
    return 0;
}
//https://reakwon.tistory.com/126