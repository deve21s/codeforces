
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
bool vis[N];
vector<int>g[N];
vector<vector<int>>cc;
vector<int>v;
bool ok = false;
void dfs(int vertex, int par) {
    vis[vertex] = true;
    v.push_back(vertex);
    for (int child : g[vertex]) {
        if (vis[child] && child != par) {
            ok = true;
        }
        if (vis[child]) continue;
        dfs(child, vertex);
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i])continue;
        if (ok) {
            break;
        }
        v.clear();
        dfs(i, 0);
        cc.push_back(v);
        c++;
    }
    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

// print the component
    cout << cc.size() << endl;
    for (auto a : cc) {
        for (int x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }
}