#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int number, time;
    cin >> number >> time;
        while(time--){
            if(number%10 ==0)
                number /= 10;
                else
                    number -= 1;
        }
    cout << number;
    return 0;    
}

