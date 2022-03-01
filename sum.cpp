#include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    int e, f, g, h;
    int sum1, sum2;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;

    sum1 = a + b + c + d;
    sum2 = e + f + g + h;

    if(sum1 > sum2){
        cout << sum1;
    }
    else
        cout << sum2;
    return 0;
    
}