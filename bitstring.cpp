#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
int main (){
    ll m = 1e9+7;
    int n;cin >> n;
    ll sum =1;
   for(int i=0;i<n;i++){
       sum = sum*2 % m;
   }
   cout << sum;
return 0;
}