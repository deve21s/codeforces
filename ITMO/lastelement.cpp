#include<bits/stdc++.h>
using namespace std;
int start =-1;
int bsearch(int arr[],int l,int r,int x){
    if(r>=l){
        int mid = l + (r-l)/2;
        if(arr[mid] == x){
            start = mid;
        }
        else if(x > arr[mid]){
            return bsearch(arr,(mid+1),r,x);
        }else{
            return bsearch(arr,l,(mid-1),x);
        }
    }
    return -1;
}

int main (){
    int arr[] = {1,2,2,2,2,3,3,3,3,3,3,6,7};
    bsearch(arr,0,13-1,3);
    cout << start;
}