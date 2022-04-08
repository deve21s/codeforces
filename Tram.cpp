#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    cin >> no;
    int s[no*2];
    int sum =0, max=0;
    for(int i=0;i<no*2;i++){
        cin >> s[i];
    }
    for(int i=0; i< (no*2-2);i++){
        if(((i+1) % 2) !=0){
            sum += s[i+1];
        }
        else{
            sum -= s[i+1];
        }
        if(sum > max){
            max = sum;
        }
    }
    cout << max;

   return 0;   
}