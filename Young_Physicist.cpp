#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n][3];
    int sum=0;
    bool flag = true;
    for(int i =0; i< n;i++){
        for(int j =0; j< 3;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0;i < 3; i++){
        sum =0;
        for(int j =0; j<n ;j++){
            sum += arr[j][i];
        }
        if(sum !=0){
            flag=false;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
