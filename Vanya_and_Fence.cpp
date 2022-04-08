#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no,height;
    int count=0;
    cin >> no >> height;
    int arr[no];
    for(int i=0;i<no;i++){
        cin >> arr[i];
        (arr[i] > height) ? count+=2 : count++;
    }
    cout << count;
   return 0;   
}

