#include <iostream>
using namespace std;

int main () {
    int x =10;
    for (int i =0;i<10;i++){
        if(x&(1 << i) !=0){
            cout << 1;
        }else{
            cout << 0;
        }
    }
    return 0;
}
