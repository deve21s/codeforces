#include<bits/stdc++.h>
using namespace std;
int main(){    
    int cost,coin;
    cin >> cost >> coin;
    int cost1= cost;
    int i=1;
    while(true){
        if(cost%10 == 0){
            cout << i;
            break;
        }if(cost %10 == coin){
            cout << i;
            break;
        }
            i++;
            cost+=cost1;
    }
    return 0;
}