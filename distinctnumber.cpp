#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
int distinctnumber(int arr[], int n){
    map<int,int> m;
    for(int i =0;i<n;i++){
        m[arr[i]]++;
    }
    return m.size();
}
int main (){
    int n; cin >> n;
    int arr[n];
    REP(i,0,n){
        cin >> arr[i];
    }
    cout << distinctnumber(arr,n);
return 0;
}