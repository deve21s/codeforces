#include<bits/stdc++.h>
using namespace std;

int main() {
  string word;
  int f =1;
  cin >> word;
    for(int i=0;i<word.size();i++){
        if(word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B'){
            i+=2;
            if(!f){
              cout << " ";
            }
            continue;
        }else{
          f = 0;
          cout << word[i];
        }
  }
    return 0;
  }
  