#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  map<int, int> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> a;
    if (m[a])
    {
      m[a]++;
    }
    else
    {
      m[a] = make_pair(a, 1);
    }
  }

  return 0;
}