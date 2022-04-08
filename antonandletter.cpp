#include<bits/stdc++.h>
using namespace std;
int arr[123];
int main() {
    int sum = 0;
    string s;
    getline(cin, s);
    for (int i = 1; i < s.size(); i += 3) {
        arr[(int)s[i]] = 1;
    }
    for (int i = 97; i < 123; i++) {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}