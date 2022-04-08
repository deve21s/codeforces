#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[101];
ll fibo(int n){
     if(arr[n] != NULL) return arr[n];
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    arr[n] = fibo(n-1) + fibo(n-2);
    return arr[n];
}

int main() {
    cout << fibo(50);
    for(int i=0;i<=2;i++){
        cout << fibo(i) << " ";
    }
    return 0;
}
  