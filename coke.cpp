#include<iostream>
using namespace std;

int main(){
    int e, f, c;
    int coke = 0;
    int bottle = 0;
    int sum = 0;

    cin >> e >> f >> c;

    bottle = e + f;
    while(bottle / c){
        coke = bottle / c;
        bottle = (bottle % c) + coke;
        sum += coke;
    }

    cout << sum;
    return 0;
}