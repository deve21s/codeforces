#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    cin >> no;
    if(no%4==0 || no%7==0){
        cout << "YES";
        return 0;
    }
    bool flag= false;
    while(no!=0){
        if(no%4==0 || no%7==0){
            flag=true;
            no/=10;
        }
        else (no < 4){
            break;
        }
    }
    if(flag)
        cout << "YES";
    else 
        cout << "NO";
        
   return 0;   
}