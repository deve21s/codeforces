// binary expo when value of the A and B is small
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
const long long MB = 1e18 + 7;

int binexpo(int a, int b) {
    if (b == 0) return 1;
    int res = binexpo(a, b / 2);
    if (b & 1) {
        // here we do 1LL to avoid overflow in res* res else use long long
        // also we doing mod opration to calculate bin power
        return (a * (res * 1LL * res) % M) % M;
    } else {
        return (res * 1LL *  res) % M;
    }
}
int binexpoitr(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1) {
            ans = (ans * a);
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}

int binmaltiply(long long a, long long b) {
    int ans = 0;
    while (b) {
        if (b & 1) {
            ans = (ans + a) % MB;
        }
        a = (a + a) % MB;
        b >>= 1;
    }
    return ans;
}

int binexpobig(long long a, long long b) {
    int ans = 1;
    while (b) {
        if (b & 1) {
            // ans = (ans * a) % MB;
            ans = binmaltiply(ans, a);
        }
        a = binmaltiply(a, a);
        b >>= 1;
    }
    return ans;
}


int main()
{
    int a = 2, b = 13;
    int ans = 1;
    cout << binexpo(a, b) << endl;
    cout << binexpoitr(a, b) << endl;
    cout << binexpobig(2, 8) << endl;
}