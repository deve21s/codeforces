#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll a,b,sum=0,rem=0;
    cin >> a >> b;
    bool f =true;
    ll c = a+b;
    while(a!=0){
        if(a%10 != 0 && b%10 != 0){
            rem = a%10 + b%10;
        }
        a = a/10;
        b = b/10;
    }
    if(sum == c)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
  }
  