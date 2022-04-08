#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
int main (){
    int n; cin >> n;
    int count = 0;
    for(int i=5;n/i>=1;i*=5)
        count += n/i;
    cout << count << "\n";
return 0;
}