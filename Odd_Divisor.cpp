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
        if (no & (no - 1))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}