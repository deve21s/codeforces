#include <iostream>
using namespace std;

template<typename T>
void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int a = 10, c = 20;
    Swap(a,c);
   cout << "after swap value for a = " << a << "and fro c = "  << c << endl;
}
