#include <bits/stdc++.h>
using namespace std;
void testcase(){
	string s; cin>>s;
	vector<int> v;
	int vitri_i = 0;
	if(s[0] == 'I'){
		v.push_back(1);
		v.push_back(2);
		vitri_i = 1;
	}else{
		v.push_back(2);
		v.push_back(1);
		vitri_i = 0;
	}
	int minn = 3;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == 'I'){
			v.push_back(minn);
			vitri_i = i + 1;
		}else{
			v.push_back(v[i]);
			for(int j = vitri_i ; j <= i; j++) v[j]++;
		}
		minn++;
	}
	for(int x : v) cout<<x;
	cout<<'\n';
}
int main(){
	int t; cin>>t;
	while(t--){
		testcase();
	}
}