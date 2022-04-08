#include<bits/stdc++.h>
#include<string>
using namespace std;

int main (){
    int arr[] = {0,0,0,0,1,1};
    int l=0,r=5;
    int index =-1;
    while (r>l)
    {
        int mid= l +(r-l)/2;
        if(arr[mid] == 1){
            cout << mid;
            index = mid;
            r = mid;
        }else{
            l = mid;
            cout << mid;
        }
    }
    cout << index;
}