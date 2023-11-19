#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int dp[1003];
    int N;
    cin >> N;

    dp[1] = 1;
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 1;

    for(int i = 5; i <= N; i++){
        if(min({ dp[i-1], dp[i-3], dp[i-4] }) == 1) dp[i] = 0;
        //하나라도 0이 있다면 0이 if문 성립하지 않음
        else dp[i] = 1;
    }
    if(dp[N]) cout << "SK";
    else cout << "CY";

    return 0;
}