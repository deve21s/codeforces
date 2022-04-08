#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    cin >> no;
    int flag=0;
    for(int i=0;i<no;i++){
        cin >> flag; 
        if(flag == 1){
            flag =1;
            break;
        }
    }
    (flag == 0) ? cout << "EASY" : cout << "HARD";
   return 0;   
}