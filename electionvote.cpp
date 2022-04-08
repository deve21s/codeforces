#include <bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, jhon = 0, jake = 0, ans = 0;
        cin >> n >> m;
        priority_queue<ll> mx_q;
        priority_queue<ll, vector<ll>, greater<ll>> mn_q;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            jhon += x;
            mn_q.push(x);
        }
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            jake += x;
            mx_q.push(x);
        }
        while (jhon <= jake)
        {
            int john_ele = mn_q.top();
            int jake_ele = mx_q.top();
            if (john_ele >= jake_ele)
            {
                break;
            }
            jhon -= john_ele;
            jhon += jake_ele;
            jake -= jake_ele;
            jake += john_ele;
            mn_q.pop();
            mx_q.pop();
            mn_q.push(jake_ele);
            mx_q.push(john_ele);
            ans++;
        }
        if (jake >= jhon)
            cout << -1 << endl;
        else
            cout << ans << end;
    }
}