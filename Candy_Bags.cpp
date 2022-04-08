#include<bits/stdc++.h>
using namespace std;

int main() {
    int no;
    cin >> no;
    int last = no*no;
    int first =1;
    for(int i=1;i<=no;i++){
        for(int j=1;j<=no/2;j++){
            cout << first << " " << last << " ";
            last--;
            first ++;
        }
        cout << "\n";
    }
    return 0;
  }
  