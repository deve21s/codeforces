#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 0,
        c = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
        }
        else if (a > b)
        {
            m++;
        }
        else
        {
            c++;
        }
    }
    if (m == c)
    {
        cout << "Friendship is magic!^^";
    }
    else if (m > c)
    {
        cout << "Mishka";
    }
    else
    {
        cout << "Chris";
    }
}
