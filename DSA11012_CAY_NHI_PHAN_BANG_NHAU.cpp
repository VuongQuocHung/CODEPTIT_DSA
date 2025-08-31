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

int n, m, ok = 1;
void check(Node *root1, Node *root2){
	if(n != m){
		ok = 0;
		return;
	}
	if(root1 == nullptr || root2 == nullptr) return;
	if(root1->data != root2->data){
		ok = 0;
		return;
	}
	check(root1->left, root2->left);
	check(root1->right, root2->right);
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
		cin >> n;
		Node *root1 = nullptr, *root2 = nullptr;
		FOR(i, 1, n){
			int u, v; char c;
			cin >> u >> v >> c;
			if(root1 == nullptr){
				root1 = new Node(u);
				makeNode(root1, v, c);
			}
			else insertNode(root1, u, v, c);
		}
		cin >> m;
		FOR(i, 1, m){
			int u, v; char c;
			cin >> u >> v >> c;
			if(root2 == nullptr){
				root2 = new Node(u);
				makeNode(root2, v, c);
			}
			else insertNode(root2, u, v, c);
		}
		check(root1, root2);
		cout << ok << endl;
		ok = 1;
	}

	return 0;
}
