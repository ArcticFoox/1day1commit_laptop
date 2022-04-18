#include<iostream>
using namespace std;

int main(){
    int a, b;
    char c;
    int ans = 0;
    cin >> a >> c >> b;

    if(c == '*'){
        ans = a * b;
    }
    else{
        ans = a + b;
    }
    return 0;
}