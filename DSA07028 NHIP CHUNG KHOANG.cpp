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

void Left_Grearer(int n, int a[], int L[]){
	// L[i] lưu chỉ số phần tử đầu tiên bên trái lớn hơn a[i]
	stack<int> st;
	FOR(i, 0, n - 1){
		// tìm chỉ số phần tử đầu tiên bên trái > a[i]
		while(!st.empty() && a[i] >= a[st.top()]){
			st.pop();
		}
		// nếu không tìm thấy tức là không có phần tử nào bên trái > a[i]
		if(st.empty()) L[i] = -1;
		else L[i] = st.top();
		st.push(i);
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
		int n; cin >> n; int a[n];
		FOR(i, 0, n - 1) cin >> a[i];
		int L[n];
		Left_Grearer(n, a, L);
		FOR(i, 0, n - 1){
			cout << i - L[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}
