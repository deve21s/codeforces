#include<bits/stdc++.h>
#include<string>
using namespace std;
int max(int r, int c){
    int mat[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin >> mat[i][j];
      }
    }
    int sum;
    for(int i=0;i<r;i++){
    sum=0;
      for(int j=0;j<c;j++){
          if(sum < mat[i][j]){
              sum = mat[i][j];
          }
      }
      cout<< sum << " ";
  }

}
int main(){
  int row,col;
  cin >> row >> col;
  max(row,col);
  return 0;
}