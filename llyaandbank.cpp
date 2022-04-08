#include <bits/stdc++.h>
using namespace std;

int main () {
    int no;
    cin >> no;
    if(no >0){
        cout << no;
        cout << no/10;
    }else{
        if(abs(no%10) > abs(no%100))
            cout << "-" +(abs(no/10));
        else
            cout<< no; 
    }

    return 0;
}
