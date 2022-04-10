#include<iostream>
#include<queue>
using namespace std;

int arr[102][102];
bool visited[102][102];
int cnt[102][102] = {0, };
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;

void BFS(int x, int y){
    queue<pair<int, int>> q;
    cnt[x][y]++;
    q.push(make_pair(x,y));
    visited[x][y] = true;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            //구현할때 하나를 빠져먹는 실수를 자주함 확실히 짚고 넘어갈것
            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(!visited[nx][ny] && arr[nx][ny] == 1){
                    cnt[nx][ny] = cnt[cx][cy] + 1;
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    BFS(0,0);

    cout << cnt[n-1][m-1];
    return 0;
}

//최단경로는 DFS로 구해야 한다고 생각함 하지만 BFS로
//현재까지 이동한 칸의 개수를 저장해나가며 탐색해야함
//https://wooono.tistory.com/410 그림 참조
//DFS가 안되는 이유 https://cocoon1787.tistory.com/115