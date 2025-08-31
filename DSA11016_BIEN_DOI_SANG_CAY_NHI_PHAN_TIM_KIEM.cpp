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

vector<int> tree;

void inorder(Node *root){
	if(root == nullptr) return;
	inorder(root->left);
	tree.pb(root->data);
	inorder(root->right);
}

void change(Node *root, int &i){
	if(root == nullptr) return;
	change(root->left, i);
	root->data = tree[i++];
	change(root->right, i);
}

void duyet(Node *root){
	if(root == nullptr) return;
	duyet(root->left);
	cout << root->data << ' ';
	duyet(root->right);
}

void solve(Node *root){
	inorder(root);
	sort(all(tree));
	int i = 0;
	change(root, i);
	duyet(root);
}

void cach2(int n){
	set<int> myset;
	FOR(i, 1, n){
		int u, v; char c;
		cin >> u >> v >> c;
		myset.insert(u);
		myset.insert(v);
	}
	for(int it : myset) cout << it << ' ';
	cout << endl;
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
		tree.clear();
		int n; cin >> n;
		// Node *root = nullptr;
		// FOR(i, 1, n){
		// 	int u, v; char c;
		// 	cin >> u >> v >> c;
		// 	if(root == nullptr) root = new Node(u);
		// 	connect(root, u, v, c);
		// }
		// solve(root);
		// cout << endl;
		cach2(n);
	}

	return 0;
}
