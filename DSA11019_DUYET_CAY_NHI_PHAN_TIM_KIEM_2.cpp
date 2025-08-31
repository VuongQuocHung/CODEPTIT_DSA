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

Node *addNode(Node *root, int key){
	if(root == nullptr) return new Node(key);
	if(root->data < key)
		root->right = addNode(root->right, key);
	else if(root->data > key)
		root->left = addNode(root->left, key);
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
		int n; cin >> n;
		Node *root = nullptr;
		FOR(i, 1, n){
			int x; cin >> x;
			root = addNode(root, x);
		}
		post_order(root);
		cout << endl;
	}

	return 0;
}
