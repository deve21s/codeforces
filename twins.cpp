#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    cin >> no;
    int arr[no];
    int sum =0,count=0;
    for(int i=0;i<no;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sum /=2;
    sort(arr,arr+no);
    int sum1=0;
    for(int i =no-1;i>=0;i--){
        sum1+=arr[i];
        count++;
        if(sum1>sum){
            break;
        }

    }
    cout<<count;
   return 0;   
}