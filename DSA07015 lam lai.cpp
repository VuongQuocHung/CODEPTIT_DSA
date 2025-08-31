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

vector<string> tach_thanh_vector(string s){
	vector<string> ans;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			string tmp = "";
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

int do_uu_tien(string op) {
    if(op == "+" || op == "-") return 1;
    if(op == "*" || op == "/") return 2;
    if(op == "^") return 3;
    return 0;
}

vector<string> trung_to_sang_hau_to(vector<string> trung_to){
	stack<string> st;
	vector<string> ans;
	for(string x : trung_to){
		if(isdigit(x[0])) ans.pb(x);
		else if(x == "(") st.push(x);
		else if(x == ")"){
			while(!st.empty() && st.top() != "("){
				ans.pb(st.top());
				st.pop();
			}
			st.pop();
		} 
		else{
			while(!st.empty() && do_uu_tien(st.top()) >= do_uu_tien(x)){
				ans.pb(st.top());
				st.pop();
			}
			st.push(x);
		}
	}
	while(!st.empty()){
		ans.pb(st.top());
		st.pop();
	}
	return ans;
}

ll calc(ll a, ll b, string op){
	if(op == "+") return a + b;
	if(op == "-") return a - b;
	if(op == "*") return a * b;
	if(op == "/") return a / b;
}

void solve(string s){
	vector<string> trung_to = tach_thanh_vector(s);
	vector<string> hau_to = trung_to_sang_hau_to(trung_to);
	stack<ll> st;
	for(string x : hau_to){
		if(isdigit(x[0])) st.push(stoll(x));
		else{
			ll o1 = st.top(); st.pop();
			ll o2 = st.top(); st.pop();
			ll o3 = calc(o2, o1, x);
			st.push(o3);
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
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		solve(s);
	}

	return 0;
}
