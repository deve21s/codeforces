#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count=0;
    if(s.size() < 8){
        cout<< "NO";
        return 0;
    }
    for(int i =1;i<s.size();i++)
        if(s[i] == s[i-1]){
            count++;
        }
        else if(count >=6){
                break;
            }
        else{
            count=0;
        }

    if(count >=6)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

