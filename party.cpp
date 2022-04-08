#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v[2001];
int mx = -1;
void dfs(int x, int level)
{
    mx = max(mx, level);
    for (int i = 0; i < v[x].size(); i++)
    {
        dfs(v[x][i], level + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, x;
    cin >> n;
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        arr[i] = x;
        if (arr[i] != -1)
            v[x].push_back(i);
        else
            v[0].push_back(i);
    }
    for (i = 0; i < v[0].size(); i++)
    {
        dfs(v[0][i], 1);
    }
    cout << mx << "\n";
}
