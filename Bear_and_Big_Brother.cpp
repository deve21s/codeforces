#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int bear, bob;
    cin >> bear >> bob;
    int count =0;
    while(bear <= bob) {
        bear*=3;
        bob*=2;
        count++;
    }
    cout << count;
    return 0;    
}

