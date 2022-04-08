#include<bits/stdc++.h>
using namespace std;
int main(){    
   int n,m,sum=0,count=0;
   cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    sort(arr,arr+n);
    for(int i=0;i<m;)
        if(arr[i]<0){
            sum += abs(arr[i]);
            count++;
            i++;
        }else{
            break;
        }
    
    cout << sum;
    return 0;
}