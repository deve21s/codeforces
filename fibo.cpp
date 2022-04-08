#include<bits/stdc++.h>
using namespace std;

long long fibo(int n,long long m[]){
    if(n == 1 || n==2 ) 
        return 1;
    
    if(m[n] != NULL){
         //cout << n << "\n";
        return m[n];
    }
    cout << n << "\n";
    m[n] = fibo(n-1,m) + fibo(n-2,m);
    return m[n]; 
}
long long arr[100];
int main(){
    int n =60;
    cout << fibo(n,arr);
}