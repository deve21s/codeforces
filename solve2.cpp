#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
	int n, m;
	cin >> n >> m;
	int sum = 0;

	string s[n];
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		s[i] = a;
	}
	bool ok = true;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			sum = s[i][j] + s[i + 1][j] + s[i][j + 1] + s[i + 1][j + 1] - 4 * (48);
			if (sum == 3) {
				ok = false;
				break;
			}
		}
	}
	if (ok) {
		cout << "YES\n";
	} else {
		cout << "No\n";
	}

}

int main() {
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}