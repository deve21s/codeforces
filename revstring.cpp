#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(ar, ar + n);
    sort(arr, arr + n);
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (!(ar[i] == arr[i] || ar[i] + 1 == arr[i]))
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
