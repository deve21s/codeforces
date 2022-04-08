#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        long long n; cin >> n;
        long long arr[n], min;

        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(i==0) 
                min = arr[0];
            else
                min = min & arr[i];
        }
       
        cout << min << "\n";
    }
   return 0;   
}