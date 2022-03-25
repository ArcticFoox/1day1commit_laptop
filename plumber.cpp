#include<iostream>
using namespace std;

int main(){
    int n, l;
    bool arr[1001] = {0, };
    int num, index = 0, cnt = 0;
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr[num] = true;
    }

    for(int i = 1; i <= 1000; i++){
        if(arr[i]){
            for(int j = 0; j < l; j++){
                if(arr[i+j]){
                    index = i+j;
                }
            }
            cnt++;
            i = index;
        }
    }

    cout << cnt;
    return 0;
}