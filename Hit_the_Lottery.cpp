#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no,count=0,i=0;
    cin >> no;
    if(no == 1 || no == 5 || no == 10 || no == 20 || no == 100){
        cout << 1;
        return 0;
    }
    int arr[] = {100,20,10,5,1};
    while(no!=0){
        if(no - arr[i] >= 0){
            no-=arr[i];
            count++;
        }
        else{
            i++;
        }
    }
    cout << count;
   return 0;   
}