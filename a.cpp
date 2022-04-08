#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int vsum = 0, msum = 0;
bool check(int n) {
	if (vsum + (n * 100) >= msum) {
		return 1;
	}
	return 0;

}
void solve() {
	int n; cin >> n;

	vector<int>v(n), m(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		vsum += v[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> m[i];
		msum += m[i];
	}
	// if (vsum >= msum) {
	// 	cout << 0 << endl;
	// 	return;
	// }
	sort(v.begin(), v.end());
	sort(v.rbegin(), v.rend());
	int ans = 0;
	int l = 0, h = 100;
	while (l <= h) {
		int mid = l + ((h - l) / 2);
		if (check(mid)) {
			ans = mid;
			h = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << ans << endl;


}

int main() {

	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}
