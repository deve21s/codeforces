#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll m = 1;
        for (int i = 3; i <= 2 * n; i++)
        {
            m = m * i % MOD;
        }
        cout << m << "\n";
    }
}
