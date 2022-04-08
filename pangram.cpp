#include <bits/stdc++.h>
using namespace std;


bool checkpangram(string& s){
    vector<bool> v(26, false);
    int index;
    for(int i =0;i<s.length();i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            index = s[i] - 'A';
        }
        else if('a' <= s[i] && s[i] <= 'z'){
            index = s[i] - 'a';
        }
        else
            continue;

        v[index] = true;
    }
    for(int i=0;i<26;i++){
        if(v[i] == false)
            return false;
    }
    return (true);
}

int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(checkpangram(s) == true)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
