#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
int main (){
    int n;cin>>n;
    if(n ==2 || n ==3) {
        cout << "NO SOLUTION";
        return 0;
    }

    int i = 2;
    while(i<=n){
        cout << i << " ";
        i+=2;
    }
    i =1;
    while (i<=n)
    {
        cout << i << " ";
        i+=2;
    }
return 0;
}