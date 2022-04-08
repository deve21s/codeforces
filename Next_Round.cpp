#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int N,place;
    cin >> N >> place;
    int cont[N];
    int count=0;
    for(int i=0;i<N;i++)
        cin >> cont[i];

    for(int i=0;i<N;i++)
        if(cont[place-1] <= cont[i] && cont[i] != 0)
            count++;

    cout << count;
   return 0;   
}

