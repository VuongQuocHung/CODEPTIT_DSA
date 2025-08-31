#include <iostream>
#include <algorithm> // Để sử dụng hàm max và min
using namespace std;

char A[2000][2000]; // Ma trận chứa các ký tự 'X' và 'O'
int n, rs, i, j;

// Hàm tìm kích thước hình vuông lớn nhất bắt đầu từ vị trí (i, j)
void find_square(int k) {
	//cout << "k = " << k << '\n';
    if (i + k < n && j + k < n) { // Kiểm tra nếu không vượt ra ngoài ma trận
    	//cout << "Kiem tra 2 o A[" << i + k << "][" << j << "] va A[" << i <<"][" << j + k << "]\n";
        if (A[i + k][j] == 'X' && A[i][j + k] == 'X') {
        	//cout << "Tiep tuc quay lui\n";
            find_square(k + 1);

            // Kiểm tra cạnh hình vuông có chứa 'O' hay không
            //cout << "Bat dau kiem tra canh khi k = " << k << "\n";
            for (int x = 1; x <= k; x++) {
            	//cout << "A[" << i + k << "][" << j + x << "] va A[" << i + x << "][" << j + k << "]\n";
                if (A[i + k][j + x] == 'O' || A[i + x][j + k] == 'O') {
                    return;
                }
            }

            // Cập nhật kích thước hình vuông lớn nhất
            //cout << "Cap nhat kich thuoc : ";
            rs = max(k + 1, rs);
            //cout << rs << " tai k = " << k << '\n';
        }
    }
}

int main() {
    int t; // Số bộ test
    cin >> t;

    while (t--) {
        rs = 0;
        cin >> n;

        // Nhập ma trận A
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        // Duyệt qua tất cả các ô trong ma trận
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                // Chỉ tìm hình vuông khi ô hiện tại là 'X'
                if (A[i][j] == 'X' && rs <= min(n - i - 1, n - j - 1)) {
                    find_square(0);
                }
            }
        }

        // In ra kích thước hình vuông lớn nhất
        cout << rs << endl;
    }

    return 0;
}
