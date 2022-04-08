#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;

int main(){
    ll m,n,a;
    cin >> m >> n >> a;
    cout << ((m+a-1)/a) * ((n+a-1)/a);
    return 0;    
}

