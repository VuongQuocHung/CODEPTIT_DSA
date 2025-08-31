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

void duyet(stack<char> st){
	while(!st.empty()){
		cout << st.top() << ' ';
		st.pop();
	}
	cout << endl;
}

bool check(string s){
	stack<char> st;
	bool check;
	char cur;
	for(char c : s){
		if(c != ')') st.push(c);
		else{
			cur = st.top();
			st.pop();
			check = 0;
			while(cur != '('){
				if(cur == '+' || cur == '-'|| cur == '*' || cur == '/') check = 1;
				cur = st.top();
				st.pop();
			}
			if(!check) return 1;
		}
	}
	return 0;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		string s;
		getline(cin, s);
		if(check(s)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}

	return 0;
}
