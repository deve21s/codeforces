#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll w, h, n;
bool good(int x)
{
    return (x / w) * (x / h) >= n;
}
int main()
{
    cin >> w >> h >> n;
    ll l = 0; // l is bad
    ll r = 1; // r is good
    while (!good(r))
        r *= 2;

    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << "\n";
}