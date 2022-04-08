#include<bits/stdc++.h>
using namespace std;

int main (){
int best = 1;
string s;
cin >> s;
int n =  s.size();
// for (int a = 0; a < n; a++) {
//     for (int b = a; b < n; b++) {
//         int sum = 0;
//         for (int k = a; k <= b; k++) {
//             if(s[a] == s[k]){
//                 sum++;
//             }else{
//                 break;
//             }
//         }
//         best = max(best,sum);
//     }
// }
// for(int a=0;a<n;a++){
//     int sum =0;
//     for(int b =a;b<n;b++){
//         if(s[a] == s[b]){
//             sum++;
//             best = max(best,sum);
//         }else
//             break;
//     }
// }
//this work in n time
int sum =1;
for(int a=1;a<n;a++){
    if(s[a-1] == s[a]){
        sum++;
        best = max(sum,best);
    }else{
        sum =1;
    }
}
cout << best << "\n";
}