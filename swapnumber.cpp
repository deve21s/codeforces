#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    int size;
    cin >> size;

    int arr[size];
    for(int i =0;i<size;i++){
        cin >> arr[i];
    }

    for(int i =1;i<size;i++){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        i++;
    }

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}