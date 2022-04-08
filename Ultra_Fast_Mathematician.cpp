#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
        char n1[10000],n2[10000];
        cin >> n1 >> n2;
        for(int i=0;i<strlen(n1);i++){
            cout << (n1[i] ^ n2[i]);
        }
   return 0;   
}