#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    // check total count
    //  check if any count become less
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (n == 1)
    {
        cout << !arr[0];
        return;
    }
    if (sum == n)
    {
        cout << n - 1;
        return;
    }
    int best = sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int nsum = 0;
            for (int k = j; k <= i; k++)
            {
                if (arr[k])
                {
                    nsum--;
                }
                if (!arr[k])
                {
                    nsum++;
                }
            }
            best = max(best, sum + nsum);
        }
    }
    cout << best;
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