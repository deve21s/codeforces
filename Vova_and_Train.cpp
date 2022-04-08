#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--){
    ll des,lamp,l,r,count=0;;
    cin >> des >> lamp >> l >> r;
    
    count = des/lamp - r/lamp + (l-1)/lamp;
    cout << count << "\n";
    }
  return 0;
}