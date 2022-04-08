#include <bits/stdc++.h>
using namespace std;

int main () {
    int no; cin >> no;
    for(int i=0;i<no;i++){
        long long a;
        cin >> a;
        int count=1;
        long long no=1;
        while(no<=sqrt(a)){
            if(a%no == 0)
                count++;
            no++;

        }
        if(count == 3){
            cout << "YES\n";
        }else
            cout << "NO\n";
    }
    return 0;
}
