#include<iostream>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    cout << b - a - 1 << "\n";
    for(a; a < b; a++){
        cout << a << " ";
    }
    return 0;
}