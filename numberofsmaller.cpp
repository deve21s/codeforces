#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;

void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    vector<ll>b(m);
    vector<ll> c(m);
    for (int i = 0; i < n; i++)cin >> a[i];
    for (int i = 0; i < m; i++)cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0, k = 0, sum = 0;
    ll pri = 0;
    while (i < n || j < m) {
        if (j == m || (a[i] == b[j])) {
            i++;
        } else {
            c[j++] = i - pri;
            if (j != 0 && b[j] != b[j - 1])
                pri = i;
        }
    }
    for (ll x : c)
        sum += x;
    cout << sum;

}

int main()
{
    // int t; cin >> t;
    // while  (t--)
    solve();
}
