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

int n, in[1005];
vector<int> pre;
unordered_map<int, int> mp;

struct Node {
	int data;
	Node *left, *right;
	Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

vector<int> chia_doi(vector<int> pre_order, int L, int R){
	vector<int> ans;
	for(int i = 0; i < pre_order.size(); i++){
		int val = pre_order[i], pos = mp[val];
		if(pos >= L && pos <= R) ans.pb(val);
	}
	return ans;
}

Node *build_tree(vector<int> pre_order, int L, int R){
	if(L > R) return nullptr;

	int val = pre_order[0];
	int mid = mp[val];
	Node *root = new Node(val);
	// cout << val << ' ' << mid << ' ' << L << ' ' << R << endl;

	vector<int> left_preorder = chia_doi(pre_order, L, mid - 1);
	// cout << "Phan ben trai la : ";
    // for(int i : left_preorder) cout << i << ' ';
    // cout << endl;

	vector<int> right_preorder = chia_doi(pre_order, mid + 1, R);
	// cout << "Phan ben phai la : ";
    // for(int i : right_preorder) cout << i << ' ';
    // cout << endl;

	root->left = build_tree(left_preorder, L, mid - 1);
	root->right = build_tree(right_preorder, mid + 1, R);

	//cout << "Tao node " << val << endl;
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
		mp.clear();
		cin >> n;
		FOR(i, 1, n){
			cin >> in[i];
			mp[in[i]] = i;
 		}
 		pre.resize(n);
 		FOR(i, 0, n - 1) cin >> pre[i];
 		Node *root = build_tree(pre, 1, n);;
 		post_order(root);
 		cout << endl;
	}

	return 0;
}
