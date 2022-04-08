#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int no; cin >> no;
    int maxi=0;
    int maxv=0;
    int mini=0;
    int minv=1000;
    for(int i=0;i<no;i++){
        int a;
        cin >> a;
        if(a>maxv){
            maxi=i;
            maxv=a;
        }
        if(a<=minv){
            mini=i;
            minv=a;
        }
    }
    if(maxi > mini){
        cout << (maxi - 1 ) + (no-mini) -1;
    }else{
        cout << (maxi -1 ) + (no - mini);
    }
   
    return 0;
  }