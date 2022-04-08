#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int v[10000000];
ll arr[1000000];
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll sum, best = 0;
    ll inx = 1;
    for (int i = 1; i <= n; i++)
    {
        v[i] += arr[i] + v[i - 1];
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        // sum = 0;
        // for (int j = i; j < i + k; j++)
        // {
        //     sum += arr[j];
        // }
        sum = 0;
        sum = v[i + k - 1] - v[i - 1];
        if (i == 1)
        {
            best = sum;
        }
        else if (best > sum)
        {
            best = sum;
            inx = i;
        }
    }
    cout << inx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}