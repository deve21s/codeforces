    #include<bits/stdc++.h>
    using namespace std;
int main(){
    int no;
    cin >> no;
    int arr[no];
    for(int i=0;i<no;i++){
        cin >> arr[i];
    }
    sort(arr,arr+no);
    for(int i=0;i<no;i++){
        cout << arr[i] << " ";
    }
        
    return 0;
}

