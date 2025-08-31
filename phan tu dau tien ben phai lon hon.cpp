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

void process(int a[], int n){
	stack<int> st;
	int R[n];
	for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[i] >= st.top()){
			st.pop();
		}
		if(st.empty()) R[i] = -1;
		else R[i] = st.top();
		st.push(a[i]);
	}
	for(int i = 0; i < n; i++) cout << R[i] << ' ';
	cout << endl;
}
int main(){
	faster();
	int n; cin >> n; int a[n];
	for(int &i : a)
		cin >> i;
	process(a, n);

	return 0;
}
