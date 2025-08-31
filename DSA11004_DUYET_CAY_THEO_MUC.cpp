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
	Node(int d){
		data = d;
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
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void Level_Order(Node *root){
	queue<Node*> Q;
	Q.push(root);
	cout << root->data << ' ';
	while(!Q.empty()){
		Node *tmp = Q.front(); Q.pop();
		if(tmp->left != nullptr){
			Q.push(tmp->left);
			cout << tmp->left->data << ' ';
		}
		if(tmp->right != nullptr){
			Q.push(tmp->right);
			cout << tmp->right->data << ' ';
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
			else{
				insertNode(root, u, v, c);
			}
		}
		Level_Order(root);
		cout << endl;
	}

	return 0;
}
