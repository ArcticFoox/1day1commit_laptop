#include<iostream>
using namespace std;

int main(){
    int a, b, c, m;
    int fatigue = 0;
    int hour = 0;
    int work = 0;
    cin >> a >> b >> c >> m;
    while(hour < 24){
        if(fatigue + a > m){
            hour++;
            fatigue -= c;
            if(fatigue < 0){
                fatigue = 0;
            }
        }
        else{
            fatigue += a;
            hour++;
            work += b;
        }
    }
    cout << work;
    return 0;
}