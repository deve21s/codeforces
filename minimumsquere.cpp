#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int s = (min(max(2 * b, a), max(2 * a, b)));
        cout << s * s << "\n";
    }
}
