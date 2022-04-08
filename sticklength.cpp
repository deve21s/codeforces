#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main (){
   ll n;cin>>n;
   ll arr[n];
   REP(i,0,n)
    cin>>arr[i];

    sort(arr,arr+n);
    ll mid = 0 + (((n-1) - 0)/2);
    ll stick = arr[mid];
    ll cost =0;
    REP(i,0,n)
        cost+=(abs(stick-arr[i]));
    cout << cost;
return 0;
}