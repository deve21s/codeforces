#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
   int no;
   string s;
   cin >> no >> s;
   string l,r;
   l = s.substr(0,no);
   r = s.substr(no);
   bool less=true,more=true;
   sort(l.begin(),l.end());
   sort(r.begin(),r.end());
   for(int i=0;i<l.size();i++){
      if(l[i] >= r[i]){
         less = false;
         break;
      }
   }
   for(int i=0;i<l.size();i++){
      if(l[i] <= r[i]){
         more = false;
         break;
      }
   }
   cout << ((less || more) ? "YES" : "NO") << "\n";
   return 0;   
}