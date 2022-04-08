#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][3];
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
        if(sum >= 2){
            count++;
        }
    }
    cout << count;
   return 0;   
}

