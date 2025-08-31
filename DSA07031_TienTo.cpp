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

void calc(vector<string> &v){
	stack<ll> st;
	int n = v.size() - 1;
	for(int i = n; i >= 0; i--){
		string temp = v[i];
		if(isdigit(temp.back())){
			st.push(stoll(temp));
		}
		else{
			ll o1 = st.top(); st.pop();
			ll o2 = st.top(); st.pop();
			if(v[i] == "+") st.push(o1 + o2);
			else if(v[i] == "-") st.push(o1 - o2);
			else if(v[i] == "/") st.push(o1 / o2);
			else if(v[i] == "*") st.push(o1 * o2);
		}
	}
	cout << st.top() << endl;
}
int main(){
	faster();
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s = "";
		vector<string> v;
		while(n--){
			cin >> s;
			v.pb(s);
		}
		calc(v);
	}

	return 0;
}
