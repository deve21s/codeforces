#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    std::ios::sync_with_stdio(false);
    int n;cin>>n;
    map<string,int> m;
    for(int i =0;i<n;i++){
        string s;
        cin >> s;
        if(!m[s]){
            m[s] +=1;
            cout << "OK\n"; 
        }else{
            cout << s <<m[s]++ << "\n";
        }
    }
    return 0;
  }