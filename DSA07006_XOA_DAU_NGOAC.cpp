#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

set<string> myset;
queue<string> Q;

void xoadaungoac(string s){
	vector<ii> dau_ngoac;
	stack<int> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			dau_ngoac.pb({st.top(), i});
			st.pop();
		}
	}
	for(ii x : dau_ngoac){
		string tmp = s;
		tmp.erase(x.fi, 1);
		tmp.erase(x.se - 1, 1); // trừ 1 vì tmp đã mất đi 1 ký tự ( do vừa xoá ở trên
		if(myset.count(tmp) == 0){
			Q.push(tmp);
			myset.insert(tmp);
		}
	}
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	string s; cin >> s;
	Q.push(s);
	while(Q.size()){
		string dau = Q.front(); Q.pop();
		xoadaungoac(dau);
	}
	for(auto x : myset) cout << x << endl;
	cout << endl;

	return 0;
}
