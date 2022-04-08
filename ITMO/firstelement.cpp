#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int l,int r,int x){
    int start =-1;
    if(r>=l){
        int mid = l + (r-l)/2;
        if(arr[mid] == x){
            start = mid;
        }
        else if(x <= arr[mid]){
            return bsearch(arr,l,(mid-1),x);
        }else{
            return bsearch(arr,mid+1,r,x);
        }
    }
    return start;
}

int main (){
    int arr[] = {1,2,3,3,5,6};
    int firstindex = bsearch(arr,0,5,3);
    if(firstindex != -1){
        cout << firstindex;
    }
}