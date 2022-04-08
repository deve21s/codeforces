#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
       ll A,B,C;
       cin >> A >> B >> C;
       ll num = max(A,B) - min(A,B);
       if(max({A,B,C}) > 2 * num){
           cout << -1 << "\n";
       }
       else if(C <= num){
           cout << C + num << "\n";
       }else{
           cout << C - num << "\n";
       }

    }

    return 0;
}

