#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;cin>>t;
  for(int i =0;i<t;i++){
    int n;
    cin>>n;
    int arr[n];
      for(int i =0;i<n;i++){
        cin>> arr[i];
      }
      sort(arr,arr+n);
      bool ok = true;
      for(int i =1;i<n;i++){
        if(abs(arr[i] - arr[i-1]) > 1){
          ok = false;
          break;
        }
      }
      (!ok) ?  cout <<"NO\n" : cout <<"YES\n";
  }
    return 0;
  }