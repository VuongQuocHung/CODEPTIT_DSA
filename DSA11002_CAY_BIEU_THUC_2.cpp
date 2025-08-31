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

int n;
string a[1005];

struct Node {
	string data;
	Node *left, *right;
	Node(string c){
		data = c;
		left = right = nullptr;
	}
};

Node *makeNode(string data){
	Node *ans = new Node(data);
	return ans;
}

Node *insertNode(Node *root, int i){
	if(i <= n){
		root = makeNode(a[i]);
		root->left = insertNode(root->left, i * 2);
		root->right = insertNode(root->right, i * 2 + 1);
	}
	return root;
}

ll calc(Node *root){
	string s = root->data;
	if(isdigit(s[0])){
		ll x = stoll(root->data);
		return x;
	}
	if(s == "+") return calc(root->left) + calc(root->right);
	if(s == "-") return calc(root->left) - calc(root->right);
	if(s == "*") return calc(root->left) * calc(root->right);
	return calc(root->left) / calc(root->right);
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
		FOR(i, 1, n) cin >> a[i];
		Node *root = nullptr;
		root = insertNode(root, 1);
		cout << calc(root) << endl;
	}

	return 0;
}
