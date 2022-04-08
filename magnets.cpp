#include<bits/stdc++.h>
using namespace std;

int main(){
int No;
cin>>No;
int c=1;
int arr[100000];
    for(int i=0;i<No;i++){
    cin>>arr[i];
    }
    for(int i=0;i<No-1;i++){
        if(arr[i]!=arr[i+1])
            c++;      
    }
    cout<< c <<endl;
    return 0;
}

