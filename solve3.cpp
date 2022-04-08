#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    int x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;
    if (x == 0 || y == 0)
    {
        cout << 0 << endl;
    }
    else if (x + x <= y)
    {
        cout << (a + b) * x << endl;
    }
    else
    {
        int c = min(a, b);
        if (a >= b)
        {
            cout << (a - c) * x + (c * y) << endl;
        }
        else
        {
            cout << (c * y) + (b - c) * x << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}