#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;   

void bfs(int start) {

	int count = 0;
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int node = q.front();
		q.pop();

		for (int i = 0; i < graph[node].size(); i++) {
			int next = graph[node][i];

			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
				count++;
			}
		}

	}
	cout << count;
}

int main()
{
	int n, m, u, v;
	cin >> n >> m;

	graph.resize(n + 1);
	visited.resize(n + 1, false);

	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	bfs(1);
	return 0;
}