    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int t; cin >> t;
        int arr[1500];
        int j=0;
        for(int i=1;i<=1666;i++){
            if(i%3!=0 && i%10!=3){
                arr[j] = i;
                j++;
            }
        }
        while(t--){
            int no;
            cin >> no;
            cout << arr[no-1] << "\n";
        }

        return 0;
    }

