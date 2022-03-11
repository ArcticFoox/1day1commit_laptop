#include<iostream>
#include<queue>
using namespace std;

int arr[1001][1001] = { 0, };
int visited[1001][1001] = { 0, };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n, m;
int days = 0;
queue<pair<int, int>> q;
void BFS(){
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(visited[nx][ny] == false && arr[nx][ny] == 0){
                    arr[nx][ny] = arr[cx][cy] + 1;
                    q.push(make_pair(nx, ny));
                    visited[nx][ny] = true;
                }
            }
        }
    }
}
int main(){
    scanf("%d %d", &m, &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 1){
                q.push(make_pair(i, j));
            }
        }
    }
    // 처음 했던 방식은 어떤 문제가 있는지 확인해 볼 것
    BFS();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) { 
                printf("-1\n");
                return 0;
            }
            if (days < arr[i][j]) {
                days = arr[i][j];
            }
        }
    }
    printf("%d\n", days-1);
    return 0;

}