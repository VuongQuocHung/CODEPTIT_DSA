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
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node *build_tree(vector<int> &v, int l, int r){
	if(l > r) return nullptr;
	int mid = (l + r)/2;
	Node *root = new Node(v[mid]);
	root->left = build_tree(v, l, mid - 1);
	root->right = build_tree(v, mid + 1, r);
	return root;
}

bool isLeaf(Node *node){
	return (node->left == nullptr && node->right == nullptr);
}

vector<int> leaf;
void post_order(Node *root){
	if(root == nullptr) return;
	if(isLeaf(root)){
		leaf.pb(root->data);
		return;
	}
	post_order(root->left);
	post_order(root->right);
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
		int n; cin >> n;
		vector<int> v(n);
		FOR(i, 0, n - 1) cin >> v[i];
		sort(all(v));
		Node *root = build_tree(v, 0, n - 1);
		post_order(root);
		cout << leaf.size() << endl;
		leaf.clear();
	}

	return 0;
}
