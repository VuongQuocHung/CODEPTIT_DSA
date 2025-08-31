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

int d = 0;
bool check = true;

string res1 = "";
string res2 = "";

long long sum = 0;
int ans = -1e9;

class Node {
public:
	int x;
	Node* left;
	Node* right;

	Node(int x) {
		this->x = x;
		left = nullptr;
		right = nullptr;
	}
};

unordered_map<int, Node*> mp;

void connect(Node *root, int u, int v, char c) {
    // Đảm bảo node u đã tồn tại trong map trước khi kết nối
    if (mp.find(u) == mp.end()) {
    	mp[u] = new Node(u);
    }

    Node *newNode = new Node(v);
    if (c == 'L') {
        mp[u]->left = newNode;
    } else {
        mp[u]->right = newNode;
    }

    // Cập nhật map để truy cập nhanh node v sau này
    mp[v] = newNode;
}


bool isLeaf(Node* r) {
	if (r->left == nullptr && r->right == nullptr) return true;
	return false;
}

int calc(Node *root){ // hàm tính đường đi dài nhất từ node đang xét đến 1 node lá ở bên trái/phải
	if(root == nullptr) return 0;

	//cout << "Di den node " << root->data << endl;
	int sum_left = calc(root->left), sum_right = calc(root->right);

	int x = root->x;

	if(isLeaf(root)) return x;

	// nếu root đang xét ko có node con bên trái hoặc phải thì tạo đường đi từ bên còn lại đến root
	if(root->left == nullptr) return sum_right + x;
	if(root->right == nullptr) return sum_left + x;

	// nếu root có cả 2 node lá ở 2 bên, ta có thể tạo đường đi từ node lá left đến right
	ans = max(ans, sum_right + sum_left + x);
	// cout << ans << endl;

	return max(sum_left, sum_right) + x; // trả về đường đi dài nhất từ node hiện tại đến 
										 // 1 trong 2 node lá con của nó
}

int main() {
	faster();
	int t;
	cin >> t;

	while (t--) {
		ans = -1e9;
		mp.clear();
		int n;
		cin >> n;

		Node* root = nullptr;

		while (n--) {
			int u, v;
			char c;

			cin >> u >> v >> c;

			if (root == nullptr) {
				root = new Node(u);
				mp[u] = root;
				connect(root, u, v, c);

			}
			else
				connect(root, u, v, c);
		}

		calc(root);
		cout << ans << endl;

	}
	return 0;
}