#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int group;
    cin >> group;
    int arr[group];
    for(int i=0;i<group;i++){
        cin >> arr[i];
    }
    int count=0;
    sort(arr, arr + group, greater<int>());
    int l = 0,r= group-1;
    while (group > 0)
    {
        if(arr[l] == 4){
            count++;
            l++;
            group--;
        }
        else if(arr[l] == 3 && arr[r] == 1){
            count++;
            l++;
            r--;
            group--;
            group--;
        }
        else if(arr[l]== 3){
            count++;
            l++;
            group--;
        }
        else if(arr[l]==2 && arr[r] ==2){
            count++;
            l++;
            r--;
            group--;
            group--;
        }
        else if(arr[l] == 2 && arr[r] ==1 && arr[r-1] ==1){
            count++;
            l++;
            r--;
            r--;
            group--;
            group--;
            group--;
        }
        else if(arr[l] ==1 && arr[l+1] == 1 && arr[l+2]==1 && arr[l+3] ==1)
        {
            count++;
            group-=4;
        }
        else{
            count++;
            group--;
        }
        
    }
    
     cout << count;
     
        
   return 0;   
}