#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n = 32;
    // to chekc if bit is set or not
    if ((n & (1 << 0)) != 0) {
        cout << "set" << endl;
    } else {
        cout << "not set" << endl;
    }
    // to set bit
    cout << (n | (1 << 1)) << endl;
    // to unset bit
    cout << (n & ~(1 << 0)) << endl;
    // to toggle the bit
    cout << (n ^ (1 << 1)) << endl;
    // to find one's count in number
    ll c = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) != 0) {
            c++;
        }
    }
    cout << c << endl;
    // builtinfuciton for one's count
    cout << __builtin_popcount(n) << endl;
    // to make uppercase using bitmagic
    char a = 'a';
    char A = a & ~(1 << 5);
    cout << A << endl;
    // spacial method
    cout << char('c' & '_') << endl;
    // to make lowercase
    char B = 'B';
    char b = B | (1 << 5);
    // spacial method
    cout << char('C' | ' ') << endl;
    cout << b << endl;
    //LSB clear all bit from number clear 4 bit 0 to 4 which means 5 bit;
    cout << (59  & (~((1 << 5) - 1))) << endl;
    //MSB to get this we need number 110011100 clear first four bit
    cout << (59 & ((1 << 4) - 1)) << endl;
    // check if number is power of two or not
    if (n & (n - 1)) {
        cout << "not power" << endl;
    }
    else {
        cout << "power of two" << endl;
    }
}

int main()
{
    int t; cin >> t;
    while  (t--)
        solve();
}