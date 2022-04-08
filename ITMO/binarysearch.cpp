#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<k;i++){
        int q;
        cin >> q;
        int l = 0;
        int r = n-1;
        bool ok = false;
        while(r>=l){
            int m = (l+r)/2;
            if(arr[m] == q){
                ok = true;
                break;
            }else if(arr[m] < q){
                    l = m+1;
            }
            else{
                r = m-1;
            }
        }
        if(ok){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
