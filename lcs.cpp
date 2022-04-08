// lcs of two common
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int t[15][15];
void solve()
{
    string s = "devendra";
    string p = "deven";
    int m = s.size();
    int n = p.size();
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i - 1] == p[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    cout << t[m][n] << endl;
    int i = m;
    int j = n;
    string rev;
    while (i > 0 && j > 0)
    {
        if (s[i - 1] == p[j - 1])
        {
            rev.push_back(s[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (t[i - 1][j] > t[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(rev.begin(), rev.end());
    cout << rev;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}