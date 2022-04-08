#include<bits/stdc++.h>
#include<string>
using namespace std;

int main (){
    int sec;
    string s;
    cin >> sec >> s;
    long long A=0;
     long long D=0;   
    for(int i=0;i<sec;i++){
        if(s[i] == 65){
            A++;
        }else{
            D++;
        }   
    }
    if(A>D){
        cout << "Anton";
    }else if(D>A){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
return 0;
}
