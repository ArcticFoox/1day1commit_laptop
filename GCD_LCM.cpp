#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    if(num2 == 0) return num1;
    else gcd(num2, num1 % num2);
}

int main(){
    int n, m;
    cin >> n >> m;

    int ans = gcd(n, m);
    cout << ans << "\n" << n * m / ans;
    return 0;
}