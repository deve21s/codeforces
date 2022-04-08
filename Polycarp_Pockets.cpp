#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[101];
    int no;
    int sum=0,max=0;
    cin >> no;
    for(int i=0;i<no;i++)
        cin >> arr[i];

    for(int i=0;i<no;i++){
        sum=0;
        for(int j=0;j<no;j++){
            if(arr[i] == arr[j]){
                sum +=1;
            }
        }
        if(sum > max)
            max = sum;
    }
    cout << max;
  return 0;
}