#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    bool flag =false;
    int r,c;
    cin >> r >> c;
        for(int i=1;i<=r;i++){
		if(i%2!=0){
			for(int j=1;j<=c;j++){
				cout << "#";
			}
            cout << "\n";
		}
		else{
            for(int j=1;j<=c;j++){
                if(flag && j==1){
                    cout << "#";
                }
                else if(flag != true && j==c){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            flag=!flag;
            cout << "\n";
		}
		
	}   
   return 0;   
}