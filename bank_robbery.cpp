#include<iostream>
using namespace std;

int main(){
    int n, k, x;
    int arr[81][2];
    int max;
    cin >> n >> k >> x;

    max = x*2;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    while(1){
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if((arr[i][0] + arr[j][0]) * (arr[i][1] + arr[j][1]) == max){
                    return max;
                }
            }
        }
        max--;
    }
}