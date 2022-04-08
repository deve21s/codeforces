#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main (){
    int n;cin>>n;
    ll arr[n];
    REP(i,0,n){
        cin>>arr[i];
    }
    ll sum =0;
    ll maxsum=LLONG_MIN;
    for(int i =0;i<n;i++){
        sum = max(arr[i],sum+arr[i]);
        cout << "sum" << sum;
        maxsum = max(maxsum,sum);
        cout << "maxsum" << maxsum;
    }
    cout << maxsum;
return 0;
}