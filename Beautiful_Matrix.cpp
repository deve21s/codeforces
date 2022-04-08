#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int n; cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int c = 0;
        bool ok = false;
        if (s[i] == 'x') {
            for (int j = i; j < n; j++) {
                if (s[j] == 'x') {
                    c++;
                    i = j;
                }
                else {
                    break;
                }
            }

            if (i == n - 1) {
                ok = true;
            }
        }
        if (c >= 3) {
            sum += c - 2;
        }
        if (ok) {
            break;
        }
    }
    cout << sum;
}

