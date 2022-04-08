#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num=0;
    int number;
    int array[n];
    for(int i =1; i<n;i++){
        cin >> number;
        num = number;
        array[num] = num;
    }
    for(int i =1; i<= n; i++){
        if(array[i] != i){
            cout << i;
        }

    }
    return 0;
}
