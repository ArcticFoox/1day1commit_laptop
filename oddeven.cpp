#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    n & 1 ? printf("Odd") : printf("Even"); // 비트 연산을 통해 if문을 좀 더 간결하게 작성할 수 있음
    return 0;
}