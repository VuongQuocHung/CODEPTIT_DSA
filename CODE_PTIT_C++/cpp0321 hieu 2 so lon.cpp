#include <bits/stdc++.h>
using namespace std;
string hieu(string&s1, string& s2){
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int a[10005] = {0}, b[1005] = {0}, res[1005];
	int n1 = s1.size(), n2 = s2.size();//n1 > n2
	for(int i = 0; i < n1; i++) a[i] = s1[i] - '0';
	for(int i = 0; i < n2; i++) b[i] = s2[i] - '0';
	int dem = 0, nho = 0;
	for(int i = 0; i < n1; i++){
		int kq = a[i] - b[i] - nho;
		if(kq < 0){
			res[dem++] = kq + 10;
			nho = 1;
		}else{
			res[dem++] = kq;
			nho = 0;
		}
	}
	string kq = "";
	for(int i = dem - 1; i >= 0; --i){
		kq = kq + to_string(res[i]);
	}
	return kq;
}
int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		string a,b; cin>>a>>b;
		if(a.size() > b.size() || ( a.size() == b.size() && a > b)){
			cout<<hieu(a, b)<<'\n';
		}else cout<<hieu(b, a)<<'\n';
	}
}