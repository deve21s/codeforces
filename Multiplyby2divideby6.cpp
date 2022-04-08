#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll no;
        cin >> no;
        int cnt2 = 0, cnt3 = 0;
        while (no % 2 == 0)
        {
            no /= 2;
            cnt2++;
        }
        while (no % 3 == 0)
        {
            no /= 3;
            cnt3++;
        }
        if (no == 1 && cnt2 <= cnt3)
        {
            cout << 2 * cnt3 - cnt2 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}