#include <bits/stdc++.h>
using namespace std;

#define MAX_N 20  // Giới hạn n để tránh TLE

int n, a[MAX_N][MAX_N], res = 0;
bool used[MAX_N];  // used[j] = true nếu đã chọn cột j
int max_col[MAX_N];  // max_col[i] = phần tử lớn nhất của hàng i

// Tính max_col[i] để dùng cho nhánh cận
void preprocess() {
    for (int i = 0; i < n; i++) {
        max_col[i] = *max_element(a[i], a[i] + n);
    }
}

void backtrack(int row, int sum, int max_future) {
    if (row == n) {  // Đã chọn đủ N hàng
        res = max(res, sum);
        return;
    }

    // Cắt nhánh: Nếu tổng lớn nhất có thể đạt được không thể vượt `res`, dừng luôn
    if (sum + max_future <= res) return;

    for (int col = 0; col < n; col++) {
        if (!used[col]) {  // Chỉ chọn nếu cột này chưa được dùng
            used[col] = true;
            backtrack(row + 1, sum + a[row][col], max_future - max_col[row]);
            used[col] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
         cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            cin >> a[i][j];

        preprocess();  // Tính max_col[i] để dùng cho nhánh cận
        memset(used, false, sizeof(used));

        // Bắt đầu quay lui từ hàng 0 với tổng = 0, giá trị lớn nhất có thể đạt được là tổng max_col[]
        backtrack(0, 0, accumulate(max_col, max_col + n, 0));

        cout << res << '\n';
    }
    return 0;
}
