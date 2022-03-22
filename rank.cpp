#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N, ts, p;
    int rank = 1;
    int cnt = 1;
    int arr[50];
    cin >> N >> ts >> p;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i] > ts) rank++;
        if(arr[i] >= ts) cnt++;
    }

    if(rank > p) cout << -1;
    else if(cnt > p) cout << -1;
    else cout << rank;
    return 0;
}