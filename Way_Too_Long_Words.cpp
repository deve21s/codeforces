#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    int t;
    cin >> t;
    while(t >=0){
        getline(cin, s);
    if(s.size() <= 10){
        cout << s << endl;
        t--;
    }else{
        int last = s.size();
        cout << s[0] << (s.length() -2) << s[s.size()-1] << endl;
        t--;
    }
    }
    
}