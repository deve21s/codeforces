#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
   int cost,doller,want;
   int sum=0;
   cin >> cost >> doller >> want;

   for(int i=1;i<=want;i++)
       sum +=cost * i;

   if(sum >= doller)
        cout << sum -doller;
    else 
        cout << "0";
    return 0;    
}

