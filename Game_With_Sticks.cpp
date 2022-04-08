#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    std::ios::sync_with_stdio(false);
    int r,c;
    cin >> r >> c;
    bool ok = true;
    while(r > 0 && c>0){
        ok = !ok;
        r--;
        c--;
    }
    (!ok) ? cout <<"Akshat" : cout <<"Malvika";
    return 0;
  }