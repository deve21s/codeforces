#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);
}
int main (){
    int n;cin >> n;
    vector< pair<int ,int> > v;
    REP(i,0,n){
        int a,b;
        cin >>a >>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),sortbysec);
    int total=0;
    int curr_end=0;
    for(auto ele : v){
        if (ele.first >= curr_end)
		{
			curr_end = ele.second;
			total++;
		}
    }
    cout << total;
return 0;
}