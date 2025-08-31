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

int d = 0;
bool check = true;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};

unordered_map<int, Node*> mp;

void connect(Node* r, int u, int v, char c) {
	if (c == 'L') {
		mp[u]->left = new Node(v);
		mp[v] = mp[u]->left;
	}
	else {
		mp[u]->right = new Node(v);
		mp[v] = mp[u]->right;
	}
}

bool isLeaf(Node* r) {
	if (r->left == nullptr && r->right == nullptr) return true;
	return false;
}

// int calc(Node* root) {
// 	int sum = 0;
// 	if (root == NULL)
// 		return sum;
// 	if (root->right != NULL && isLeaf(root->right)) {
// 		sum += root->right->x;
// 	}
// 	if (root->right != NULL && !isLeaf(root->right)) {
// 		sum += calc(root->right);
// 	}
// 	if (root->left != NULL && !isLeaf(root->left)) {
// 		sum += calc(root->left);
// 	}
// 	return sum;
// }

ll sum = 0;
void duyet(Node *root){
	if(root == nullptr) return;
	if(root->right != nullptr && isLeaf(root->right)) sum += root->right->data;
	if(root->right != nullptr && !isLeaf(root->right)) duyet(root->right);
	if(root->left != nullptr && !isLeaf(root->left)) duyet(root->left);
}

int main() {
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;

	while (t--) {
		sum = 0;
		mp.clear();
		int n;
		cin >> n;
		Node* root = nullptr;
		while (n--) {
			int u, v;
			char c;
			cin >> u >> v >> c;
			if (root == nullptr) {
				root = new Node(u);
				mp[u] = root;
				connect(root, u, v, c);
			}
			else
				connect(root, u, v, c);
		}
		duyet(root);
		cout << sum  << endl;
	}
	return 0;
}