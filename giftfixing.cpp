#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){    
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        ll aa=0,bb=0;
        aa = a[0];
        bb = b[0];
        for(int i=1;i<n;i++){
            if(a[i] < aa){
                aa = a[i];
            }
            if(b[i] < bb){
                bb = b[i];
            }
        }
        ll sum =0;
        for(int i=0;i<n;i++){
            sum += max(a[i]-aa,b[i]-bb);
        }

        cout << sum << "\n";
        
    }
    
    return 0;
}