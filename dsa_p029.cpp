#include <bits/stdc++.h>
using namespace std;

const int N = 20; // Số thành phố tối đa
int n; // Số thành phố
int c[N][N]; // Ma trận chi phí
int dp[1 << N][N]; // dp[mask][u]: chi phí nhỏ nhất để đi qua các đỉnh trong mask, kết thúc tại u
int INF = 1e9; // Giá trị vô cực

// Hàm tính chi phí nhỏ nhất
int tsp(int mask, int u) {
    // Nếu đã đi qua tất cả các thành phố, quay về thành phố xuất phát
    if (mask == (1 << n) - 1) {
        return c[u][0];
    }
    
    // Nếu trạng thái đã được tính
    if (dp[mask][u] != -1) {
        return dp[mask][u];
    }
    
    int ans = INF;
    // Thử đi đến các thành phố chưa được thăm
    for (int v = 0; v < n; v++) {
        if (!(mask & (1 << v))) { // Nếu v chưa được thăm
            ans = min(ans, c[u][v] + tsp(mask | (1 << v), v));
        }
    }
    
    return dp[mask][u] = ans;
}

int main() {
    // Nhập số lượng thành phố
    cin >> n;
    
    // Nhập ma trận chi phí
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c[i][j];
        }
    }
    
    // Khởi tạo mảng dp
    memset(dp, -1, sizeof(dp));
    
    // Gọi hàm tsp bắt đầu từ thành phố 0, chưa thăm thành phố nào
    int result = tsp(1, 0);
    
    // In kết quả
    if (result >= INF) {
        cout << "No solution" << endl;
    } else {
        cout << "Minimum cost: " << result << endl;
    }
    
    return 0;
}