
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n; cin >> n;
    vector<int> adj[n];
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 0; i < n; i++) {
        for (auto x : adj[i]) {
            cout << x << " ";
        }
        cout << '\n';
    }
    int a = 2, b = 1;
    bool ok = false;
    for (auto x : adj[a]) {
        if (x == b) {
            ok = true;
            break;
        }
    }
    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}