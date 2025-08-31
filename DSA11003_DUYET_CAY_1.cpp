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

int n, pre[1005], in[1005];
unordered_map<int, int> mp; // map[i] : vị trí của đỉnh i theo thứ tự inorder
int pos = 1; // lấy đỉnh từ preorder

void Duyet(int l, int r){
	if(l > r) return;
	int node = pre[pos++]; // lấy đỉnh từ preorder ra
	int idx = mp[node]; // tìm vị trí đỉnh đó trong mảng inorder

	Duyet(l, idx - 1); // đệ quy cho cây con trái
	Duyet(idx + 1, r); // đệ quy cho cây con phải
	cout  << in[idx] << ' ';
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		FOR(i, 1, n) cin >> in[i];
		FOR(i, 1, n) cin >> pre[i];
		FOR(i, 1, n) mp[in[i]] = i;
		pos = 1;
		Duyet(1, n);
		cout << endl;
	}

	return 0;
}
 