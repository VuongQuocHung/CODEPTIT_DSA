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

unordered_map<int, int> mp; // map dùng để lưu số bậc xuất hiện
							// nếu size của map >= 2 tức là có ít nhất 1 node lá
							// ko cùng bậc với các node còn lại

void duyet(Node *root, int level){
	if(root == nullptr) return;

	if(root->left == nullptr && root->right == nullptr){
		mp[level]++;
		return;
	}
	duyet(root->left, level + 1);
	duyet(root->right, level + 1);
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
		duyet(root, 0);
		if(mp.size() >= 2) cout << 0 << endl;
		else cout << 1 << endl;
		mp.clear();
	}

	return 0;
}
