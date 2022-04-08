#include<iostream>
#include<string>
using namespace std;

int main(){
    bool f = true;
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    for(int i=0;i<n;i++){
        if(s1[i] != s2[n-i-1]){
            f = false;
            break;
        }
    }
   (f)? cout << "YES" : cout << "NO";
}
