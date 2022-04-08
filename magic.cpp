#include<bits/stdc++.h>
using namespace std;
vector<int> z;
int magic(int x,int n){
    
    while (x>0)
    {
        int y = ((x%10) + n) % 10;
        z.push_back(y);
        x = x/10;
    }   
}
 
int main(){
    magic(2075,5);
    reverse(z.begin(),z.end());
    int number =0;
    for(auto x : z){
        number +=x;
    }
    if(number == 0){
        cout << number;
    }else
    {
     for(auto x : z){
        cout << x;
    }   
    }
}