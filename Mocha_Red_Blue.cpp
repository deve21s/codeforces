#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n >> s;
        bool f = true;
        for(int i=0;i<n;i++){
            if(s[i] == '?'){
                if(f){
                    s[i] = 'B';
                }
                else{
                    s[i] = 'R';
                }
                f = !f;
            }
        }
        cout << s << "\n";
    }
   return 0;   
}