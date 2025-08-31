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

unordered_map<int, Node*> mp; // dùng map để lưu chỉ số của các Node

void connect(Node *root, int u, int v, char c){ // u là Node cha, v là Node con, c là vị trí
	if(root == nullptr) return;
	if(c == 'L'){
		mp[u]->left = new Node(v);
		mp[v] = mp[u]->left;
	}
	else{
		mp[u]->right = new Node(v);
		mp[v] = mp[u]->right;
	}
}

bool isLeaf(Node *node){
	if(node->left == nullptr && node->right == nullptr) return true;
	return false;
}

ll sum = 0;
void duyet(Node *root){
	if(root == nullptr) return;

	if(root->right != nullptr && isLeaf(root->right)) sum += root->right->data;

	if(root->right != nullptr && !isLeaf(root->right)) duyet(root->right);

	if(root->left != nullptr && !isLeaf(root->left)) duyet(root->left);
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
		sum = 0; mp.clear();
		int n; cin >> n;
		Node *root = nullptr;
		FOR(i, 1, n){
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == nullptr){
				root = new Node(u);
				mp[u] = root;
				connect(root,u, v, c);
			}
			else{
				connect(root, u, v, c);
			}
		}
		duyet(root);
		cout << sum << endl;
	}

	return 0;
}
