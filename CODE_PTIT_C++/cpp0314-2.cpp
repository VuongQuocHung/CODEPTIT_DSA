#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin >> n;
    cin.ignore();
    set<string> s;
    for(int i=1; i<=n; i++){
    	string a; getline(cin, a);
    	s.insert(a);
	}
	cout<<s.size();
}