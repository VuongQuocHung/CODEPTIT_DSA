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


void Right_Smaller(int n, int a[], int R[]){
	// R[i] : chỉ số của phần tử đầu tiên bên phải nhỏ hơn a[i]
	stack<int> st; // st lưu chỉ số của các phần tử
	FORD(i, n - 1, 0){
		while(!st.empty() && a[i] <= a[st.top()]){
			st.pop();
		}
		if(st.empty()) R[i] = n - 1;
		else R[i] = st.top() - 1;
		st.push(i);
	}
}

void Left_Smaller(int n, int a[], int L[]){
	// L[i] : chỉ số của phần tử đầu tiên bên trái nhỏ hơn a[i]
	stack<int> st; // st lưu chỉ số của các phần tử
	FOR(i, 0, n - 1){
		while(!st.empty() && a[i] <= a[st.top()]){
			st.pop();
		}
		if(st.empty()) L[i] = 0;
		else L[i] = st.top() + 1;
		st.push(i);
	}
}

int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int R[n], L[n];
		Right_Smaller(n, a, R);
		Left_Smaller(n, a, L);
		ll ans = 0;
		FOR(i, 0, n - 1){
			ans = max(ans, 1ll * a[i] * (R[i] - L[i] + 1));
		}
		cout << ans << endl;
	}

	return 0;
}
