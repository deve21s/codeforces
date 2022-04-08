#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        double sum = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            sum +=arr[i];
        }
        sum = sum / (n-1);
        sum += arr[n-1];
        printf("%.9f\n",sum); 

    }
   return 0;   
}