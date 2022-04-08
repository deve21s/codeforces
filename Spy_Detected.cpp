#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int no;
        cin >> no;
        int arr[no];
        for(int i=0;i<no;i++){
            cin >> arr[i];
        }
        bool flag=true;
        for(int i=0;i<no;i++){
            for(int j=0;j<no;j++){
                if(i == j){
                    continue;
                }
                else{
                    if(arr[i] == arr[j]){
                        flag = false;
                    }
                }
            }
            if(flag){
                cout << i+1;
                break;
            }
                
        }
    }
   return 0;   
}