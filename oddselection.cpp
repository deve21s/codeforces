#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {

        int n,sel;
        cin>>n>>sel;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        bool flag = false;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum +=arr[i];
            count++;
            if(count == sel){
                if(sum%2!=0){
                    flag =true;
                    break;
                }else{
                    sum =0;
                    count =0;
                }
            }
        }
       (flag) ? cout << "YES" << "\n" : cout << "NO" << "\n";

    }
    return 0;
}