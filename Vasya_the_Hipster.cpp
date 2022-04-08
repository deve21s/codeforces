#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

   int defcount =0;
   int samecount =0;
    defcount =  min(a,b);
    samecount = max((a-min(a,b))/2,(b-min(a,b))/2);
    cout << defcount << " " << samecount;         
   return 0;   
}