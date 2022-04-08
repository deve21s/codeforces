#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll> d;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (d.empty())
                d.push_back(a);
            else
            {
                if (d.front() > a)
                    d.push_front(a);
                else
                    d.push_back(a);
            }
        }

        for (ll i : d)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}
