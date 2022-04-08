#include<bits/stdc++.h>
using namespace std;

int main (){
    int sec,no;
    char s[100];
    cin >> no >> sec;
    cin >> s;
while (sec--)
{
    for(int i=1;i<strlen(s);i++){
    if(s[i] > s[i-1]){
        swap(s[i],s[i-1]);
        i++;
    }
}
}
cout << s << "\n";
    return 0;
}