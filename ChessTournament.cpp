#include<bits/stdc++.h>
using namespace std;
int main(){    
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        string s;
        cin >> s;
        if(n <= 2){ 
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                int count =0;
                for(int j=0;j<n;j++){
                    if(i==j) cout << "X";
                    else if(s[i] == '1'){
                        cout << "+"; 
                    }else{
                        if(count ==0){
                            cout << "+";count++;
                        }
                        else
                            cout << "=";

                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}


/*
X 1
0 X
*/