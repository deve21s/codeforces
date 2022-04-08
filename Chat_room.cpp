#include<bits/stdc++.h>
#include<string>
using namespace std;

int32_t main() {
    string s;
    cin >> s;
    char arr[] = {"hello"};
    int i=0;
    int j=0;
    int count=0;
    while(j < s.length()){
        if(arr[i] == s[j]){
            count++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    if(count == 5){
        cout << "YES";
    }else{
        cout << "NO";
    }
  return 0;
}