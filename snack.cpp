#include<iostream>
using namespace std;

int main(){
    int v, w;
    int index;
    float min = -1;
    float out;
    for(int i = 0; i < 3; i++){
        cin >> v >> w;
        if(v >= 500)
            out = (float)(v - 50) / (float)w;
        else
            out = (float)v / (float)w;

        cout << out <<"\n";
        if(min == -1){
            min = out;
            index = i;
        }

        if(min > out){
            min = out;
            index = i;
        }
    }
    if(index == 0){
        cout << 'S';
    }
    else if(index == 1){
        cout << 'N';
    }
    else
        cout << 'U';
    return 0;
}