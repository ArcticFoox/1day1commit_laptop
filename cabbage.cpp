#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;

int arr[51][51] = {0, };
bool visited[51][51] = {0, };
int d_x[4] = { 1, 0, -1, 0 };
int d_y[4] = { 0, -1, 0, 1 };
int m, n;

void BFS(int y, int x) {
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));
	visited[y][x] = true;

	while (!q.empty()) {
		int c_y = q.front().first;
		int c_x = q.front().second;
        q.pop();

		for (int i = 0; i < 4; i++) {
			int n_y = c_y + d_y[i];
			int n_x = c_x + d_x[i];

			if (n_x >= 0 && n_y >= 0 && n_x < m && n_y < n) {
				if (!visited[n_y][n_x] && arr[n_y][n_x]) {
					q.push(make_pair(n_y, n_x));
					visited[n_y][n_x] = true;
				}
			}
		}
	}
}

int main() {
	int test, k;
	cin >> test;
	for (int testcase = 0; testcase < test; testcase++) {
		int count = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			arr[y][x] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1) {
					if (!visited[i][j]) {
						BFS(i, j);
						count++;
					}
				}
			}
		}
		cout << count << "\n";
		memset(visited, false, sizeof(visited));
		memset(arr, 0, sizeof(arr));
		
	}
	return 0;
}