#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    bool swap =false;
    while (t--)
    {
        int no; cin >> no;
        int arr[no+1];
        for(int i=1;i<=no;i++){
            cin >> arr[i];
        }
        int count=0;
        for(int i=1;i<=no;i++){
            if(i%2==0){
                for(int i=2;i<no-1;i+=2){
                    if(arr[i] > arr[i+1]){
                        int temp=arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        swap=true;
                    }
                }
            }else{  
                for(int i=1;i<no-1;i+=2){
                    if(arr[i] > arr[i+1]){
                        int temp=arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        swap=true;
                    }
                }
            }
            if(swap){
                count++;
                swap = false;
            }
        }
        cout << count << "\n";
    }
    
    return 0;
  }
  