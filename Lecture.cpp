#include<bits/stdc++.h>
using namespace std;
int main(){    
   int n,m;
   cin >> n>>m;
   map<string ,string> t;
   for(int i=0;i<m;i++){
       string a,b;
       cin >> a>> b;
       t[a] = b;
   }
   for(int i=0;i<n;i++){
       string a;
       cin >> a;
       string b;
       b = t[a];
       if(b.size() <a.size())
           cout << b<< " ";
       else
            cout << a << " ";
   }

    return 0;
}