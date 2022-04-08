#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n,b,d,sum=0;
    cin >> n >> b >> d;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >>arr[i];
    }
    int i=0,count=0;
    while(n--){
        if(arr[i] <= b){
            sum += arr[i];
        }
        if(sum > d){
            count++;
            sum=0;
        }
        i++;
    }
    cout << count;

    return 0;
  }
  