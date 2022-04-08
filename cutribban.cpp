#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<ll, ll> mp;
ll cut(ll n, ll a, ll b, ll c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (mp.count(n))
    {
        return mp[n];
    }
    return mp[n] = 1 + max(cut(n - a, a, b, c), max(cut(n - b, a, b, c), cut(n - c, a, b, c)));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << cut(n, a, b, c) << endl;
}
