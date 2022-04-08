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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            float minele = min(arr[i], arr[i + 1]);
            float maxele = max(arr[i], arr[i + 1]);
            while (maxele / minele > 2.0)
            {
                maxele = ceil(maxele / 2);
                count++;
            }
        }
        cout << count << "\n";
    }
}
