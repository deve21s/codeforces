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
        int n;
        cin >> n;
        for (int pw = 2; pw < 30; pw++)
        {
            int val = (1 << pw) - 1;
            if (n % val == 0)
            {
                // cerr << val << endl;
                cout << n / val << endl;
                break;
            }
        }
    }
}