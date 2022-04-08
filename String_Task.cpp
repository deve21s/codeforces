#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  for(int i=0;i<n;i++){
    if(!(s[i] == 65 || s[i] == 97 ||s[i] == 69 ||s[i] == 101||s[i] == 79 || s[i] == 111 || s[i] == 73 || s[i] == 105 ||s[i] ==  85 || s[i] == 117 || s[i] == 89 || s[i] == 121)){
      if(s[i] <= 90){
      s[i] +=32;
      cout << "." << s[i]; 
    }
    else{
      cout << "." << s[i];
    }      
    }

  }
}
