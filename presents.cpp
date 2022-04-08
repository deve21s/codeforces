#include<bits/stdc++.h>
using namespace std;
int main(){
    int no,p;
    cin >> no;
    int arr[no + 1];
    for(int i=1;i<=no;i++){
        cin >> p;
        arr[p] = i;
    }
    for(int i=1;i<=no;i++){
        cout << arr[i] << " ";
    }

    return 0;
}