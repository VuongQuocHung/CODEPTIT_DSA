#include <bits/stdc++.h>
using namespace std;
string minn(int n, int s){
	string res(n, '0');
	res[0] = '1';
	--s;
	for(int i = n - 1; i >= 0; i--){
		int tmp = res[i] - '0';
		if(s > 9 - tmp){
			res[i] = '9';
			s -= 9;
		}else{
			res[i] += s;
			break;
		}
	}
	return res;
}
string maxx(int n, int s){
	string res(n, '0');
	for(int i = 0 ; i < n; i++){
		int tmp = res[i] - '0';
		if(s > 9 - tmp){
			res[i] = '9';
			s  = s - 9 + tmp;
		}else{
			res[i] += s;
			break;
		}
	}
	return res;
}
int main(){
	int n, s; cin >> n >> s;
	if(s <= 0 || s > 9*n) cout<<"-1 -1\n";
	else cout<<minn(n, s)<<' '<<maxx(n, s);
}