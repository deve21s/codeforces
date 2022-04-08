#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long no;
        cin >> no;
        if(no >= 3){
            if(no%2==0){
                no = (no/2)-1;
                cout << no << "\n";
            }
            else{
                no = floor(no/2);
                cout << no << "\n";
            }      
        }
        else{
            cout << 0 << "\n";
        }
    }
   return 0;   
}