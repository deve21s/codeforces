#include <iostream>
using namespace std;

int main () {
   int x,ans=0;
   cin >> x;
    while(x){
        if(x&1)
            ans++;
        x>>=1;
    }
    cout << ans;
    return 0;
}
