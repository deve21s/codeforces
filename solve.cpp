#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    char arr[n + 1][c + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (arr[r][c] == 'B')
    {
        cout << 0 << endl;
        return;
    }
    if (n == 1 || r == 1)
    {
        cout << 1;
        return;
    }
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 'B')
            {
                ok = true;
                break;
            }
        }
    }
    if (ok)
    {
        int c = 0;
        // vector<char> a, b;
        for (int i = 1; i <= n; i++)
        {
            if (arr[r][i] == 'B')
            {
                c++;
                break;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            // if (i != r)
            if (arr[i][c] == 'B')
            {
                c++;
                break;
            }
        }
        if (c >= 1)
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++)
        solve();
}