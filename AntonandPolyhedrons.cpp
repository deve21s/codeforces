#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    std::ios::sync_with_stdio(false);
    int n;cin>>n;
    map<string,int> m {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };
    int sum =0;
    for(int i =0;i<n;i++){
        string s;
        cin >> s;
        sum += m[s];
    }
    cout << sum;
    return 0;
  }