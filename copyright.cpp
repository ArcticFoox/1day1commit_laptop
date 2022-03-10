#include<iostream>
using namespace std;

int main(){
    int avg;
    int num;
    int titles;
    cin >> num >> avg;

    titles = (avg - 1) * num ;

    cout << titles + 1;
}