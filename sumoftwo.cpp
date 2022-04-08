#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main (){
    ll n,m;
    cin >> n >> m;
    vector<ll> v;
    for(int i =0;i<n;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    // sort(v.begin(),v.end());
    int l=0,r=n-1;
    bool ok = false;
    while(l<r){
        if(v[l] + v[r] > m){
            r--;
        }else if (v[l] + v[r] < m){
            l++;
        }else{
            cout << l << " " << r;
            ok = true;
            break;
        }
    } 
    if(!ok){
        cout << "IMPOSSIBLE";
    }
return 0;
}