#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n = 9;
    if ((n & (1 << 0)) != 0) {
        cout << "set";
    } else {
        cout << "not set";
    }
    cout << (n & ~(1 << 3));

}

int main()
{
    int t; cin >> t;
    while  (t--)
        solve();
}