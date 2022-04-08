#include<bits/stdc++.h>
using namespace std;
int main(){    
    int t,n,arr[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>> arr[i];

        vector<int> v;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            int diff = arr[i] - arr[i-1];
            v.push_back(diff);
        }
        sort(v.begin(),v.end());
        cout << v[0] << "\n";
    }
    return 0;
}