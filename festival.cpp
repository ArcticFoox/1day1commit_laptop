#include<iostream>
using namespace std;

int main(){
    int c, n;
    
    
    cin >> c;

    for(int cases = 0; cases < c; cases++){
        int min = 0;
        int arr[100];
        int l_index;
        int l;
        float avg = 0;
        cin >> n;
        cin >> l;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n - l; i++){
            int sum = 0;
            for(int j = 0; j < l; j++){
                sum += arr[i + j];
            }
            if(sum < min || min == 0){
                min = sum;
                l_index = i + l;
            }
        }
        for(int i = l_index; i < n; i++){
            if(arr[i] < (min / l)){
                min += arr[i];
                l++;
            }
        }

        avg = (float)min / (float)l;

        cout << avg;
        return 0;
    }
}