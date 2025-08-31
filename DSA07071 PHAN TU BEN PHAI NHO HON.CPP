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

void Next_Greater(int a[], int n, int f[]){
	stack<int> st;
	FOR(i, 0, n - 1){
		while(!st.empty() && a[i] > a[st.top()]){
			f[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		f[st.top()] = -1;
		st.pop();
	}
}

void Right_Smaller(int a[], int n, int f[]){
	stack<int> st;
	FOR(i, 0, n - 1){
		while(!st.empty() && a[i] < a[st.top()]){
			f[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		f[st.top()] = -1;
		st.pop();
	}
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
		int n; cin >> n; int a[n], next_greater[n], right_smaller[n];
		FOR(i, 0, n - 1) cin >> a[i];
		Next_Greater(a, n, next_greater);
		Right_Smaller(a, n, right_smaller);
		FOR(i, 0, n - 1){
			if(next_greater[i] == -1 || right_smaller[i] == -1){
				cout << a[i] << ' ' << -1 << ' ' << -1 << endl;
			}
			else cout << a[i] << ' ' <<  a[next_greater[i]] << ' ' << a[right_smaller[i]] << endl;
			// if(next_greater[i] == -1 || right_smaller[i] == -1){
			// 	cout << -1 << ' ';
			// }
			// else{
			// 	cout << a[right_smaller[next_greater[i]]] << ' ';
			// }
		}
		cout << endl;
	}

	return 0;
}
