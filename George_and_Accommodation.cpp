#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int no;
    int count=0;
    cin >> no;
    for(int i=0;i<no;i++){
        int a,b;
        cin >> a >> b;
        if(b-a >=2)
            count++;
    }
    
    cout << count;
   return 0;   
}