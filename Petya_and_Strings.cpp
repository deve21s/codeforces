#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
  char s1[1000],s2[1000];
    cin >> s1 >> s2;
    for(int i=0;i<strlen(s1);i++){
        if(s1[i] <= 90){
            s1[i] += 32;
        }
        if(s2[i] <= 90){
            s2[i] += 32;
        }
    }
  int res = strcmp(s1, s2);
    if(res >0){
        cout << 1;
    }else if(res < 0){
        cout << -1;
    }else{
        cout << 0;
    }
}
