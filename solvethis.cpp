#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    int c = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        if (i != 0 || i != n - 1) {
            if (x == 1) {
                c++;
            }
        }
    }
    if (n == 3) {
        if (v[1] == 1 || v[1] % 2 != 0) {
            cout << -1 << endl;
            return;
        }
    } else if ((n - 2) - c == 0 ) {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if (v[i] & 1) {
            ans += (v[i] / 2) + 1;
        } else {
            ans += v[i] / 2;
        }
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}
