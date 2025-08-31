#include <bits/stdc++.h>
using namespace std;
struct student{
	int stt;
	string msv, ten, lop, email, dn;
	void input(){
		getline(cin, msv);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
        getline(cin, dn);
	}
	void output(){
		cout << stt << ' ' << msv << ' ' << ten << ' ' << lop << ' ' << email << ' ' << dn << '\n';
	}
};
bool cmp(student a, student b){
	return a.msv < b.msv;
}
int main(){
	int n; cin >> n; cin.ignore();
	student a[n];
	for(int i = 0; i < n; i++){
		a[i].stt = i + 1;
		a[i].input();
	}
	sort(a, a + n, cmp);
	int q; cin >> q; cin.ignore();
	while(q--){
		string s; cin >> s;
		for(int i = 0; i < n; i++){
			if(a[i].dn == s) a[i].output();
		}
	}
}