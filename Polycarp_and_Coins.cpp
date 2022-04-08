#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    long long n,coin1,coin2; cin >> n;
    coin1=floor(n/3);
    coin2=floor(n/3);
    if(n%3==1){
        coin1+=1;
    }if(n%3==2){
        coin2+=1;
    }
    cout << coin1 << " " << coin2 << "\n";
        
  }
  return 0;
}