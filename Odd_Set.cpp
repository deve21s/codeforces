#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--){
        int no; cin >> no;
        ll a;
        int even=0,odd=0;
        for(int i=0;i<2*no;i++){
            cin >> a;
            if(a %2==0){
                even++;
            }
            else{
                odd++;
            }
        } 
        (even == odd) ? cout << "YES" : cout << "NO"; cout << "\n";
    }
  return 0;
}