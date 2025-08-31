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

bool check(string s){ // check xem có thừa dấu ngoặc không
	stack<char> st;
	bool check;
	char cur;
	for(char x : s){
		if(x != ')') st.push(x); // đẩy hết các ký tự không phải ')' vào st
		else{
			cur = st.top();
			st.pop();
			check = 0;
			while(cur != '('){
				if(cur == '+' || cur == '-' || cur == '*' || cur == '/') check = 1;
				cur = st.top();
				st.pop();
			}
			// nếu sau vòng while mà không thấy 1 phép toán nào nhưng lại có dấu '('
			// chứng tỏ bị thừa
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
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin, s);
		if(check(s)) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
