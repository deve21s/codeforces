#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        if(s[i] == 72 || s[i]== 81 || s[i] == 57){
            flag = true;
            break;
        }
    }
    (flag) ? cout << "YES" : cout << "NO";
    return 0;
}