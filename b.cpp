#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
{
	list<int> queue;
	bool visited[v];

	for (int i = 0; i < v; i++) {
		visited[i] = false;
		dist[i] = INT_MAX;
		pred[i] = -1;
	}

	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);

	while (!queue.empty()) {
		int u = queue.front();
		queue.pop_front();
		for (int i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);

				if (adj[u][i] == dest)
					return true;
			}
		}
	}

	return false;
}

void printShortestDistance(vector<int> adj[], int s,
                           int dest, int v)
{
	int pred[v], dist[v];

	BFS(adj, s, dest, v, pred, dist);
	// if (BFS(adj, s, dest, v, pred, dist) == false) {
	// 	cout << "Given source and destination"
	// 	     << " are not connected";
	// 	return;
	// }
	vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}
	// cout << dist[dest];
	if (dist[dest] == INT_MAX) {
		cout << 0;
	} else {
		cout << 1;
	}
}

int main() {
	int n; cin >> n;
	map<int, int>m;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		m[x] = i;
	}
	int e; cin >> e;
	vector<int>g[n];
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		g[m[x]].push_back(m[y]);
	}
	int a, b; cin >> a >> b;
	int p, q;
	p = m[a], q = m[b];
	printShortestDistance(g, p, q, n);
	return 0;
}

/*
4
2
5
7
9
4
2 9
7 2
7 9
9 5
7
9
*/