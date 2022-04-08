#include<bits/stdc++.h>
using namespace std;

vector<int>v[100005];
bool vis[100005];
int cat[100005];
int n, m;
int ans;
void dfs(int vertex, int p, int c, int mx) {
    if (cat[vertex]) c++;
    else
        c = 0;
    mx = max(mx, c);

    int numchild = 0;
    for (int child : v[vertex]) {
        if (child != p) {
            dfs(child, vertex, c, mx);
            numchild++;
        }
    }
    if (numchild == 0 && mx <= m)ans++;
}
int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> cat[i];
    }
    for (int i = 1; i < n ; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1, -1, 0, 0);
    int a = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i].size() == 1) {
            if (vis[i]) {
                a++;
            }
        }
    }
    cout << ans << endl;
}