#include<iostream>
#include<queue>
using namespace std;

int main(){
    int test;
    int n, m, priority;
    cin >> test;

    for(int i = 0; i < test; i++){
        int count = 0;

        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for(int j = 0; j < n; j++){
            cin >> priority;
            q.push({j, priority});  // make_pair 기능 대체
            pq.push(priority);
        }

        while (!q.empty()){
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                count++;
                if (index == m) {
                    cout << count << "\n";
                    break;
                }
            }
            else q.push({ index,value });
        }
        
    }
}