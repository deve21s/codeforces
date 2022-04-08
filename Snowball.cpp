#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int snowball[3][2];
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2-1;j++){
            cin >> snowball[i][j];
            sum +=snowball[i][j];
        }
    }
    int i=0,j=0;
    for(int i=1;i<3;i++){
        for(int j=0;j<2-1;j++){
           sum= sum - snowball[i][j];
        }
    }
    cout << sum;

}

