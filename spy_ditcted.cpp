#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int no;
    cin >> no;
    vector<int> v(no);
    for (int &e : v) {
        cin >> e;
    }
    vector<int> a = v;
    sort(a.begin(), a.end());
    for (int i = 0; i < no; i++) {
        if (v[i] != a[1]) {
            cout << i + 1 << "\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}