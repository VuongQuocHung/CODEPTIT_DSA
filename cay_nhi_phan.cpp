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

Node *makeNode(int d){
	Node *ans = new Node(d);
	return ans;
}

Node *insertNode(Node *root, int key){
	if(root == nullptr) return makeNode(key);
	if(root->data < key)
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	

	return 0;
}
