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

struct Node {
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = nullptr;
	}
};


void connect(Node *root, int u, int v, char c){
	if(root == nullptr) return;
	if(root->data == u){
		Node *x = new Node(v);
		if(c == 'L') root->left = x;
		else root->right = x;
	}
	else{
		connect(root->left, u, v, c);
		connect(root->right, u, v, c);
	}
}

bool isLeaf(Node *root){
	return (root->left == nullptr && root->right == nullptr);
}

int ans = INT_MIN;

int calc(Node *root){ // hàm tính đường đi dài nhất từ node đang xét đến 1 node lá ở bên trái/phải
	if(root == nullptr) return 0;

	//cout << "Di den node " << root->data << endl;
	int sum_left = calc(root->left), sum_right = calc(root->right);

	int x = root->data;

	if(isLeaf(root)) return x;

	// nếu root đang xét ko có node con bên trái hoặc phải thì tạo đường đi từ bên còn lại đến root
	if(root->left == nullptr) return sum_right + x;
	if(root->right == nullptr) return sum_left + x;

	// nếu root có cả 2 node lá ở 2 bên, ta có thể tạo đường đi từ node lá left đến right
	ans = max(ans, sum_right + sum_left + x);
	// cout << ans << endl;

	return max(sum_left, sum_right) + x; // trả về đường đi dài nhất từ node hiện tại đến 
										 // 1 trong 2 node lá con của nó
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
		ans = INT_MIN;
		int n; cin >> n;
		Node *root = nullptr;
		FOR(i, 1, n){
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == nullptr){
				root = new Node(u);
			}
			connect(root, u, v, c);
		}
		calc(root);
		cout << ans << endl;
	}

	return 0;
}
