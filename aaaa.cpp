#include <bits/stdc++.h>
using namespace std;

int N = 6;
int M = 7;
int A = 1;
int B = 6;

map<int, int>m;
void dfs(int s, vector<vector<int> > g,
         vector<int>& v)
{
    for (auto i : g[s]) {
        if (!v[i]) {
            v[i] = 1;

            dfs(i, g, v);
        }
    }
}

int deleteEdges(int n, int m, int a, int b,
                vector<vector<int> > edges)
{
    vector<vector<int> > g(n, vector<int>());
    for (int i = 0; i < m; i++) {
        g[edges[i][0] - 1].push_back(edges[i][1] - 1);
        g[edges[i][1] - 1].push_back(edges[i][0] - 1);
    }

    vector<int> v(n, 0);
    v[a - 1] = 1;

    dfs(a - 1, g, v);

    int cnt = 0;

    for (int i = 0; i < n; i++) {


        if (v[i] == 0)
            continue;
        for (int j = 0; j < g[i].size(); j++) {


            if (g[i][j] == b - 1) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    vector<vector<int> > edges;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x] = i;
    }
    int e; cin >> e;
    for (int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;
        edges.push_back({[m[a]], m[b]});
    }

    int p, q; cin >> p >> q;

    cout << deleteEdges(n, e, m[p], m[q], edges);

    return 0;
}
