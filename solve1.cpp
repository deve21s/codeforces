#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;

    cin >> s;
    vector<char> v;
    vector<int> pos;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3') {
            v.push_back(s[i]);
            pos.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        s[pos[i]] = v[i];
    }
    cout << s;


}