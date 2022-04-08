#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (int i = 0; i < k; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        ll cat_pos = 0;
        ll total = 0;
        for (int i = 0; i < k; i++)
        {
            if (cat_pos < a[i])
            {
                cat_pos += (n - a[i]);
                total++;    
            }
            else
                break;
        }
        cout << total << endl;
    }
}
