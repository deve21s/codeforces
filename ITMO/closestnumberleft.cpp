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
        int l = -1;
        int r = n;
        while(r>l+1){
            int m = (l+r)/2;
            if(arr[m] <= q){
                l = m;
            }else
                r = m;
        }
        cout << r << "\n" ;
    }
}
