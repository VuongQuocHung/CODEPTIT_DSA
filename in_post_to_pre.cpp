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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int n, post[1005], in[1005];
unordered_map<int, int> mp; // map[i] : vị trí của đỉnh i theo thứ tự inorder
int pos = n; // lấy đỉnh từ post_order

void Duyet(int l, int r){
	if(l > r) return;
	cout << pos << ' ' << post[pos] << endl;
	int node = post[pos--]; // lấy đỉnh từ post_order ra
	int idx = mp[node]; // tìm vị trí đỉnh đó trong mảng inorder

	cout << "node = " << in[idx] << endl;
	Duyet(idx + 1, r); // đệ quy cho cây con phải
	Duyet(l, idx - 1); // đệ quy cho cây con trái
}

int main(){
	faster();
	
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		FOR(i, 1, n) cin >> in[i];
		FOR(i, 1, n) cin >> post[i];
		FOR(i, 1, n) mp[in[i]] = i;
		pos = n;
		Duyet(1, n);
		cout << endl;
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//