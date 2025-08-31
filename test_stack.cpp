#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int n, k, a[100];
bool used[100];
char ans[21];

void backtrack(int pos){
	if(pos > n){
		for(int i = 1; i <= n; i++)
			cout << ans[i];
		cout << '\n';
		return;
	}
	for(char i = '0'; i <= '1'; i++){
		ans[pos] = i;
		backtrack(pos + 1);
	}
}

void sinhNhiPhan(){
	stack<string> st;
	st.push("");
	while(!st.empty()){
		string s = st.top();
		st.pop();
		if(s.size() == n)
			cout << s << '\n';
		else{
			st.push(s + "1");
			st.push(s + "0");
		}
	}
}

void sinhHoanVi(int pos){
	if(pos > k){
		for(int i = 1; i <= k; i++)
			cout << a[i] << ' ';
		cout << '\n';
		return;
	}
	//for(int i = a[pos - 1] + 1; i <= n - k + pos; i++){
	for(int i = 1; i <= n; i++){
		if(!used[i] && i > a[pos]){
			used[i] = 1;
			a[pos] = i;
			sinhHoanVi(pos + 1);
			used[i] = 0;
		}
	}
}

int main(){
	faster();
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	cin >> n >> k;
	memset(used, 0, sizeof(used));
	sinhHoanVi(1);
	// sinhNhiPhan();

	return 0;
}

//_______________________________B23DCCN375_______________________________//