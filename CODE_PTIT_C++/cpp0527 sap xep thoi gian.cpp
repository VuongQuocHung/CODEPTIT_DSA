#include <bits/stdc++.h>
using namespace std;
struct hour{
	int h, m, s;
	void input(){
		cin >> h >> m >> s;
	}
	void output(){
		cout << h << ' ' << m << ' ' << s << '\n';
	}
};

bool cmp(hour a, hour b){
	if(a.h != b.h) return a.h < b.h;
	else if(a.m != b.m) return a.m < b.m;
	else return a.s < b.s;
}
int main(){
	int n; cin >> n;
	hour t[n];
	for(int i = 0; i < n; i++){
		t[i].input();
	}
	sort(t, t + n, cmp);
	for(int i = 0; i < n; i++){
		t[i].output();
	}
}