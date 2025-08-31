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
	Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node *addNode(Node *root, int key){
	if(root == nullptr) return new Node(key);
	if(root->data < key)
		root->right = addNode(root->right, key);
	else if(root->data > key)
		root->left = addNode(root->left, key);
	return root;
}

vector<int> v;
void inorder(Node *root){
	if(root == nullptr) return;
	inorder(root->left);
	v.pb(root->data);
	inorder(root->right);
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
		v.clear();
		int n; cin >> n;
		Node *root = nullptr;
		int a[n];
		FOR(i, 0, n - 1){
			cin >> a[i];
			root = addNode(root, a[i]);
		}
		inorder(root);
		int ok = 1;
		FOR(i, 0, n - 1){
			if(a[i] != v[i]){
				cout << 0 << endl;
				ok = 0;
				break;
			}
		}
		if(ok) cout << 1 << endl;
	}

	return 0;
}
