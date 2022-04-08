#include<bits/stdc++.h>
using namespace std;

int main(){
int No;
cin>>No;
long double arr[105],sum=0;
    for(int i=0;i<No;i++){
        cin >> arr[i];
        sum += arr[i]; 
    }
    double ans = sum*100/(No*100);
    cout << setprecision(14) << ans;
    return 0;
}

