#include <iostream>
#include <vector>
#include <algorithm>
#include <queue> 
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int s) {

	visited[s] = true;
	cout << s << " ";

	for (int i = 0; i < graph[s].size(); i++) {
		if (!visited[graph[s][i]]) {
			dfs(graph[s][i]);
		}
	}
}
void bfs(int start) {
	
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int node = q.front();
		cout << node << " ";
		q.pop();

		for (int i = 0; i < graph[node].size(); i++) {
			int next = graph[node][i];

			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
			}
		}
	}

}

int main()
{
	int n, m, v;
	cin >> n >> m >> v;

	graph.resize(n + 1);
	visited.resize(n + 1, false);
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(v);
	cout << endl;
	fill(visited.begin(), visited.end(), false);
	bfs(v);
	return 0;
}