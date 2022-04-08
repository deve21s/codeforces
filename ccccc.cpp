#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int c = 0;
    bool ok = true;
    for (int i = 1; i < n;)
    {

        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] == 1)
            {
                if (j - i > 1)
                {
                    if (c == 0)
                    {
                        sum += j - i;
                        i = j;
                        c++;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    i++;
                }
                break;
            }
        }
        if (!ok)
        {
            break;
        }
    }
    if (ok)
    {
        cout << min(sum, n - 1) << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}
