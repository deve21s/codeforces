#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    int count=0;
    cin >> no;
    for(int i=5;i>0;){
        if(no - i >= 0){
            count++; 
            no -= i;
        }
        else
    i--;
    }
    cout << count;
   return 0;   
}