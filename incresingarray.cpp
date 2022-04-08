#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
int main (){
ll n;cin >> n;
ll arr[n];
REP(i,0,n){
    cin >> arr[i];
}
ll max =0;
    for(int j=1;j<n;j++){
        ll sum=0;
        if(arr[j-1] > arr[j]){
           sum = arr[j-1] - arr[j];
           arr[j] += sum; 
           max += sum;
        }
    }
    cout << max << "\n";
return 0;
}