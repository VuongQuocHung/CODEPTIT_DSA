#include <bits/stdc++.h>
using namespace std;
void testcase(){
	string s; cin>>s; 
	int n = s.size(), i = n - 2, j = n - 1;
	// tìm vị trí i đầu tiên từ phải sang trái mà ở đó s[i] > s[i + 1]
	while(i >= 0 && s[i] <= s[i + 1]) i--;
	if(i == - 1){
		cout<<"-1\n";
		return;
	}
	//cout << i << '\n';
	// tìm vị trí j đầu tiên từ phải sang trái mà ở đó s[j] < s[i];
	while(s[j] >= s[i]){
		--j;
	}
	while(s[j] == s[j-1]) --j;
	swap(s[i], s[j]);
	cout<< s <<'\n';
}
int main(){
	int t; cin>>t;
	while(t--){
		testcase();
	}
}