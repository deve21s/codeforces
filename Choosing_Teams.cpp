#include<bits/stdc++.h>
using namespace std;

int main() {
    int no,t;
    int count=0,team=0;
    cin>>no>>t;
    int arr[no];
    for(int i=0;i<no;i++){
        cin >> arr[i];
        arr[i] = arr[i] + t;
        if(arr[i] <= 5){
            count++;
        }
        if(count == 3){
            team++;
            count=0;
        }
    }
    cout << team;

    return 0;
  }
  