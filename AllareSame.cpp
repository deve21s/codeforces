#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int minL, maxR, valueL, valueR, minvalue, maxn;
        for (int i = 0; i < n; i++) {
            int l, r, cost; cin >> l >> r >> cost;
            if (i == 0) {
                minL = l;
                maxR = r;
                valueL = valueR = c;
                maxn = r - l + 1;
                minvalue = cost;
            } else {
                if (l < minL) minL = l valueL = cost ;
                else if (l == minL) valueL = min(cost, valueL);
                if (r > maxR) maxR = r; valueR = cost;
                else if ( r == maxR) valueR = min(cost, valueR);
            }
        }

    }
}
