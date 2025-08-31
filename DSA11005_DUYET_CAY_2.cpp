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

int n, inorder[1005];
vector<int> level;
unordered_map<int, int> mp;

struct Node {
	int data;
	Node *left, *right;
	Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

vector<int> loc(vector<int> levelorder, int L, int R){
	vector<int> ans;
	for(int i = 0; i < levelorder.size(); i++){
		int val = levelorder[i], pos = mp[val];
		if(pos >= L && pos <= R) ans.pb(val);
	}
	return ans;
}

Node *build_tree(vector<int> levelorder, int L, int R){
	if(levelorder.empty() || L > R) return nullptr;

	int root_val = levelorder[0];
	int mid = mp[root_val];
	Node *root = new Node(root_val);

	vector<int> left_level = loc(levelorder, L, mid - 1);
	vector<int> right_level = loc(levelorder, mid + 1, R);

	root->left = build_tree(left_level, L, mid - 1);
	root->right = build_tree(right_level, mid + 1, R);

	return root;
}

void post_order(Node *root){
	if(root == nullptr) return;
	post_order(root->left);
	post_order(root->right);
	cout << root->data << ' ';
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
		memset(inorder, 0, sizeof(inorder));
		level.clear(); mp.clear();
		cin >> n;
		FOR(i, 1, n){
			cin >> inorder[i];
			mp[inorder[i]] = i;
		}
		level.resize(n);
		FOR(i, 0, n - 1) cin >> level[i];
		Node *root = build_tree(level, 1, n);
		post_order(root);
		cout << endl;
	}

	return 0;
}
