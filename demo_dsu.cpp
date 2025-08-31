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

int n, m, parent[1005], visited[1005];

int find(int u){
	if(u == parent[u]) return u;
	else find(parent[u]);
}

void Union(int u, int v){
	u = parent[u];
	v = parent[v];
	if(u == v) return;
	else parent[u] = v;
}

struct Node {
	int key;
	Node *left, *right;
	Node(int item){
		key = item;
		left = right - nullptr;
	}
};

int maxDepth(Node *T){
	if(T == nullptr) return 0;
	else{
		int lDepth = maxDepth(T->left);
		int rDepth = maxDepth(T->right);
		if(lDepth > rDepth) return(lDepth + 1);
		else return (rDepth + 1);
	}
}

Node *insert(Node *node, int x){
	if(node == nullptr) return new Node(x);
	else(node->key == x) return node;
	if(node->key < x) node->right = insert(node->right, x);
	else node->left = insert(node->left, x);
	return node;
}

int main(){
	// faster();
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	// FOR(i, 1, n) parent[i] = i;

	Node *root = new Node(50);
	root->left = new Node(30);
	root->right = new Node(70);
	root->left->left = new Node(20);
	root->left->right = new Node(40);
	root->right->left = new Node(60);
	root->right->right = new Node(80);

	return 0;
}
