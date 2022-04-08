#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    string s;
	cin>>s;
	int countup=0,countlow=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        countup++;
	    }else{
	        countlow++;
	    }
	}
	if(countup>countlow){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
}

int main() {
    solve();
    return 0;
}