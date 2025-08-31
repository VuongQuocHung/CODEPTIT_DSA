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

void Next_Greater(int n, int a[], int f[]){
	// f[i] : chỉ số của phần tử đầu tiên bên phải lớn hơn a[i]
	stack<int> st; // st lưu chỉ số của các phần tử
	FORD(i, n - 1, 0){
		while(!st.empty() && a[i] >= a[st.top()]){
			st.pop();
		}
		if(st.empty()) f[i] = -1;
		else f[i] = st.top();
		st.push(i);
	}
}

void Next_Smaller(int n, int a[], int f[]){
	// f[i] : chỉ số của phần tử đầu tiên bên phải nhỏ hơn a[i]
	stack<int> st; // st lưu chỉ số của các phần tử
	FORD(i, n - 1, 0){
		while(!st.empty() && a[i] <= a[st.top()]){
			st.pop();
		}
		if(st.empty()) f[i] = -1;
		else f[i] = st.top();
		st.push(i);
	}
}

int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		FOR(i, 0, n - 1) cin >>a[i];
		int greater[n], smaller[n];
		Next_Greater(n, a, greater);
		Next_Smaller(n, a, smaller);
	
		FOR(i, 0, n - 1){
			if(greater[i] == -1) cout << -1 << ' ';
			else{
				if(smaller[greater[i]] == -1) cout << -1 << ' ';
				else cout << a[smaller[greater[i]]] << ' ';
			}
		}
		cout << endl;
	}

	return 0;
}
