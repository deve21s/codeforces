#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> v = {2,3,3,7,8,8,8};
auto a = lower_bound(v.begin(),v.end(),5);
auto b = upper_bound(v.begin(),v.end(),5);
cout << *a << " " << *b << "\n";
}