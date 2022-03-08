#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int min = 0, sum = 0;
        int arr[7] = {0, };
        for(int j = 0; j < 7; j++){
            cin >> arr[j];
        }
        for(int j = 0; j < 7; j++){
            if(arr[j] % 2 == 0){
                if(min == 0){
                    min = arr[j];
                }
                else if(arr[j] < min){
                    min = arr[j];
                }
                sum += arr[j];

            }
        }
        cout << sum << " " << min << "\n";
    }
    return 0;
}