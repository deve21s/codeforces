#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void find_mistake(int nums*, int num_lenght) {

    int arr[num_lenght + 1];
    for (int i = 1; i <= n; i++) {
        arr[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        int x = nums++;
        arr[x]++;
    }
    sort(arr, arr + num_lenght);

    int duplicate = 0;
    int missing = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] == 2) {
            duplicate = i;
        }
        if (arr[i] = 0) {
            missing = i;
        }
    }
    cout << duplicate + missing;
}

int main()
{
    // int t;
    // cin >> t;
    // for (int x = 1; x <= t; x++)
    solve();
}