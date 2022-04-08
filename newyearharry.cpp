#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int p,t;
    cin >> p >> t;
    int arr[100];
    arr[0]=5;
    for(int i=1;i<10;i++){
        arr[i]= arr[i-1] +(i+1)*5;
    }
    int count=0;
    for(int i =0;i<10;i++){
        if(t + arr[i] <= 240){
            count++;
        }
        if(count == p){
            break;
        }
    }
    cout << count;
    return 0;
  }