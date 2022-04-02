#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int n, m, start;
int graph[1001][1001];
bool check[1001];

void dfs(int idx){
    cout << idx << " ";

    for(int i = 1; i <= n; i++){
        if(graph[idx][i] && !check[i]){
            check[i] = true;
            dfs(i);
        }
    }
}

void bfs(int idx){
    queue<int> q;
    q.push(idx);
	check[idx] = true;

    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        cout << tmp <<" ";
        for(int i = 1; i <= n; i++){
            if(graph[tmp][i] && !check[i]){
                check[i] = true;
                q.push(i);
            }
        }
    }
}

int main(){
    cin >> n >> m >> start;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    check[start] = true;
    dfs(start);
    printf("\n");
    memset(check, false, sizeof(check));
    bfs(start);
    return 0;
}
//https://jaimemin.tistory.com/561