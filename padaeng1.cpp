#include<iostream>

using namespace std;

int t, n;
int sum = 0;

int main(){
    cin >> t;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        sum += num;
    }

    if(t <= sum){
        cout << "Padaeng_i Happy";
    }
    else{
        cout << "Padaeng_i Cry";
    }
    
    return 0;
}