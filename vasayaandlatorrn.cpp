#include<bits/stdc++.h>
using namespace std;
int main(){    
    int lamp,length,r;
    cin >> lamp >> length;
    int arr[lamp];
    for(int i=0;i<lamp;i++){
        cin >> arr[i];
    }
    sort(arr,arr+lamp);
    r = max(arr[0],length - arr[lamp-1]) *2;

    for(int i=0;i<lamp-1;i++){
        r = max(r,arr[i+1]-arr[i]);
    }
    cout.precision(10);
    cout << fixed << r/2.0;
    return 0;
}