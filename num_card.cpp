// #include<iostream>
// #include<map>

// using namespace std;

// map<int, int> card;
// int n, m;

// int main(){
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         int num;
//         cin >> num;
//         card[num]++;
//     }

//     cin >> m;

//     for(int i = 0; i < m; i++){
//         int num;
//         cin >> num;
//         if(card[num]){
//             cout << 1 << " ";
//         }
//         else{
//             cout << 0 << " ";
//         }
//     }        
//     return 0;
// }

//시간초과

#include<iostream>
#include<algorithm>

using namespace std;

int M, N, num;
int arr[500001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + N);

    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> num;
        if(binary_search(arr, arr + N, num)){
            cout << '1' << ' ';
        }
        else{
            cout << '0' << ' ';
        }
    }
    return 0;
}