#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll coal = k;
        ll stick = (coal)*y;
        stick += k;
        stick--;
        ll total = stick / (x - 1);
        ll other = stick % (x - 1);
        if (other)
        {
            total++;
        }
        cout << total + k << "\n";
    }
}
