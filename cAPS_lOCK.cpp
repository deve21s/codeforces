#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    bool flag = true; 
    // if(s[0] >= 97){
        for(int i =1;i< s.size();i++){
            if(s[i] >=97){
                flag=false;
                break;
            }
        }
    // }
    if(flag && s[0] <=90){
        for(int i =0;i<s.size();i++){
            s[i] = s[i] + 32;
        }
        cout << s;
    }else if(flag && s[0] >= 97){
        s[0] = s[0]-32;
        for(int i =1;i<s.size();i++){
            s[i] = s[i] + 32;
        }
        cout << s;
    }else {
        cout << s;
    }

   return 0;   
}