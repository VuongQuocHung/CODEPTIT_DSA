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

void makeNode(Node *root, int x, char c){
	if(c == 'L') root->left = new Node(x);
	else root->right = new Node(x);
}

void insertNode(Node *root, int u, int v, char c){
	if(root == nullptr) return;
	if(root->data == u) makeNode(root, v, c);
	else insertNode(root->left, u, v, c), insertNode(root->right, u, v, c);
}

void spiral_order(Node *root){
	stack<Node*> st1, st2; // st1 lưu các node ở hàng lẻ (1, 3, 5, ...)
						   // st2 lưu các node ở hàng chẵn (2, 4, 6, ...)
	st1.push(root);
	while(!st1.empty() || !st2.empty()){
		while(!st1.empty()){
			Node *tmp = st1.top(); st1.pop();
			cout << tmp->data << ' ';
			if(tmp->right != nullptr) st2.push(tmp->right);
			if(tmp->left != nullptr) st2.push(tmp->left);

		}
		while(!st2.empty()){
			Node *tmp = st2.top(); st2.pop();
			cout << tmp->data << ' ';
			if(tmp->left != nullptr) st1.push(tmp->left);
			if(tmp->right != nullptr) st1.push(tmp->right);
		}
	}
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
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == nullptr){
				root = new Node(u);
				makeNode(root, v, c);
			}
			else insertNode(root, u, v, c);
		}
		spiral_order(root);
		cout << endl;
	}
 
	return 0;
}
