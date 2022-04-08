#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string sorted = s;
        sort(sorted.begin(),sorted.end());
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] !=sorted[i]){
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}