#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string arr[100001];

int main(){
    int n;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        if(arr[i].size() == 3){
            cout << arr[i];
            break;
        }
    }
    return 0;
}