#include <bits/stdc++.h>
using namespace std;

int n;
int gh[100][100];
bool vis[100];

void bfs(int i) {
	queue<int> q;
	q.push(i);
	vis[i] = true;
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (int k = 0; k < n; k++) {
			if (!vis[k] && gh[node][k] == 1) {
				if (k != 0) cout << '-' << k;
				q.push(k);
				vis[k] = true;
			}
		}
	}
	return;
}

int main() {
	n = 7;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> gh[i][j];
	cout << '0';
	memset(vis, false, sizeof(vis));
	for (int i = 0; i < n; i++) {
		if (!vis[i]) 
			bfs(i);
	}
	return 0;
} 
