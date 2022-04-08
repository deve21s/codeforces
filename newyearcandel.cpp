#include <iostream>
using namespace std;

int main () {
    int a,b;
    cin >> a >> b;
    int sum = a;
    while(a>=b){
         int d = a/b;
         sum +=d;
         a = d + (a%b);
    }
    cout << sum;
    return 0;
}
