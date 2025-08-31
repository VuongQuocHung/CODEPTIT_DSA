#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int inorder[1001];
unordered_map<int, int> mp; // Lưu vị trí của node trong inorder

// Lọc ra các phần tử trong levelorder xuất hiện trong inorder[l..r]
vector<int> filter(const vector<int> &level, int l, int r) {
    vector<int> res;
    if(l > r) return res;
    for (int i = 0; i < level.size(); ++i) {
        int val = level[i];
        if (mp[val] >= l && mp[val] <= r){
            res.push_back(val);
        }
    }
    cout << endl;
    return res;
}

// Xây dựng cây từ levelorder và đoạn inorder [l, r]
Node* build_tree(const vector<int> &level, int l, int r) {
    if (level.empty() || l > r) return nullptr;

    int root_val = level[0];
    Node *root = new Node(root_val);

    // Chia cây trái và phải
    int mid = mp[root_val];
    cout << root->data << ' ' << mid << ' ' << l << ' ' << r << endl;

    vector<int> left_level = filter(level, l, mid - 1);
    cout << "Phan ben trai la : ";
    for(int i : left_level) cout << i << ' ';
    cout << endl;

    vector<int> right_level = filter(level, mid + 1, r);
    cout << "Phan ben phai la : ";
    for(int i : right_level) cout << i << ' ';
    cout << endl;

    root->left = build_tree(left_level, l, mid - 1);
    root->right = build_tree(right_level, mid + 1, r);

    cout << "Tao node " << root_val << endl;
    return root;
}

// Duyệt hậu (postorder)
void postorder_traversal(Node *root) {
    if (!root) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}

// Duyệt tiền (preorder)
void preorder_traversal(Node *root) {
    if (!root) return;
    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

// Duyệt giữa (inorder)
void inorder_traversal(Node *root) {
    if (!root) return;
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

// Duyệt theo mức (levelorder)
void levelorder_traversal(Node *root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node *cur = q.front(); q.pop();
        cout << cur->data << " ";
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;

        mp.clear();
        vector<int> level(n);
        for (int i = 1; i <= n; i++) {
            cin >> inorder[i];
            mp[inorder[i]] = i;
        }
        for (int i = 0; i < n; i++) cin >> level[i];

        Node *root = build_tree(level, 1, n);

        // Xuất các kiểu duyệt:
        cout << "Preorder: "; preorder_traversal(root); cout << '\n';
        cout << "Inorder: "; inorder_traversal(root); cout << '\n';
        cout << "Postorder: "; postorder_traversal(root); cout << '\n';
        cout << "Levelorder: "; levelorder_traversal(root); cout << '\n';
    }
    return 0;
}
