#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    cin >> no;
    char s[no];
    cin >> s;
    int count=0;
    for(int i=0; i< no;i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout << count;

   return 0;   
}