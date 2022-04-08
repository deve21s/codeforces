#include<bits/stdc++.h>
using namespace std;

int main() {
    long long ans = 0;
    int start =1;
    int no,task;
    cin >> no >> task;
    for(int i=0;i<task;i++){
        int t;
        cin >> t;
        if(t >= start)
            ans += t - start;
        else
            ans+= no - (start - t);
        start = t;
    }
    cout << ans;
    return 0;
  }
  