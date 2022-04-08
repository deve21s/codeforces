#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a =3;
    int *ip = &a;
    int **iip = &ip;
    **iip = 10;
    cout << *(ip) <<' ' << *(*iip);
    
    return 0;
}
