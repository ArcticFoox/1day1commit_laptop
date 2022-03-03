#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

const int MAX = 1000000;

bool isPrime(int num) {
    if (num < 2) return false;

    for(int i = 2 ; i <= sqrt(num) ; i++) {
        if(num % i == 0) return false;
    }

    return true;
}

bool checkPalindrome(string str) {
    string front, back;

    front = str;
    reverse(str.begin(), str.end());
    back = str;

    if(front == back) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;

    for(int i = n ; ; i++) {
        if(isPrime(i) && checkPalindrome(to_string(i))){
            cout << i;
            break;
        }
    }
    // 1,000,000까지가 아니다.
    // 범위가 정해지지 않았으니 에라토스테네스의 체는 쓸 수 없다
    // int arr[MAX + 1];
    // for(int i = 2; i <= MAX; i++){
    //     arr[i] = i;
    // }

    // for(int i = 2; i <= MAX; i++){
    //     if(arr[i] == 0) continue;

    //     for(int j = 2 * i; j <= MAX; j+=i){
    //         arr[j] = 0;
    //     }
    // }

    // cin >> n;

    // for(int i = n; i <= MAX; i++){
    //     if(arr[i] != 0){
    //         if(checkPalindrome(to_string(i))){
    //             cout << arr[i];
    //             break;
    //         }
    //     }
    // }
    return 0;
}
//https://velog.io/@max9106/Algorithm-%EC%97%90%EB%9D%BC%ED%86%A0%EC%8A%A4%ED%85%8C%EB%84%A4%EC%8A%A4%EC%9D%98-%EC%B2%B4
//https://9x211x2.tistory.com/35