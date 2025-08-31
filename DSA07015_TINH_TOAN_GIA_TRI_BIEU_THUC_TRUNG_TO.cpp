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

ll calc(ll o1, ll o2, string s){
	if(s == "+") return o1 + o2;
	if(s == "-") return o1 - o2;
	if(s == "*") return o1 * o2;
	if(s == "/") return o1 / o2;
}

int do_uu_tien(string s){
	if(s == "-" || s == "+") return 1;
	if(s == "/" || s == "*") return 2;
	return 0;
}

vector<string> tach_thanh_vector(string s){
	vector<string> ans;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			string tmp;
			for(int j = i; j < s.size(); j++){
				if(isdigit(s[j])) tmp.pb(s[j]);
				else break;
			}
			i += tmp.size() - 1;
			ans.pb(tmp);
		}
		else ans.pb(string(1, s[i]));
	}
	return ans;
}

vector<string> trung_to_sang_hau_to(vector<string> trung_to){
	stack<string> st;
	vector<string> ans;
	for(auto s : trung_to){
		if(isdigit(s[0])) ans.pb(s);
		else if(s == "(") st.push(s);
		else if(s == ")"){
			while(!st.empty() && st.top() != "("){
				ans.pb(st.top());
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && do_uu_tien(st.top()) >= do_uu_tien(s)){
				ans.pb(st.top());
				st.pop();
			}
			st.push(s);
		}
	}
	while(!st.empty()){
		ans.pb(st.top());
		st.pop();
	}
	return ans;
}

void solve(vector<string> f){
	stack<ll> st;
	for(auto s : f){
		if(isdigit(s.back())) st.push(stoll(s));
		else{
			ll o1 = st.top(); st.pop();
			ll o2 = st.top(); st.pop();
			st.push(calc(o2, o1, s));
		}
	}
	cout << st.top() << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		string s; cin >> s;
		vector<string> f = tach_thanh_vector(s);
		vector<string> hau_to = trung_to_sang_hau_to(f);
		// for(auto h : hau_to) cout << h << ' ';
		// 	cout << endl;
		solve(hau_to);
	}

	return 0;
}
