// Made by Vương Quốc Hưng

#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Cho ma trận vuông A[N][N] có các phần tử hoặc là ký tự ‘O’ hoặc là ký tự ‘X’. 
// Hãy tìm cấp của ma trận vuông lớn nhất có các phần tử ‘X’ bao quanh các phần tử ‘O’. 
// Ví dụ với ma trận dưới đây ta sẽ có kết quả là 3.

// X O X X X
// X X X X X
// X X O X O                                
// X X X X X                    
// X X X O O   

// Ý tưởng : xét biên của từng ma trận vuông cấp n đến 1, nếu ma trận nào có biên chứa
// toàn x thì in ra cấp ma trận đó, còn không thì in ra 0.

char a[1001][1001];
int i, j, n, ans;
void quay_lui(int k){
	cout << "k = " << k << '\n';
	
	// Kiểm tra ô hiện tại có vượt quá biên không
	if(i + k < n && j + k < n)
	{
		cout << "Kiem tra o a[" << i + k << "][" << j << "] va a[" << i << "][" << j + k << "]\n";
		cout << a[i + k][j] << ' ' << a[i][j + k] << '\n';
		if(a[i + k][j] == 'X' && a[i][j + k] == 'X')
		{
			cout << "Tiep tuc quay lui\n";
			quay_lui(k + 1);

			// Kiểm tra cạnh hình vuông có chứa O không 
			cout << "Bat dau kiem tra cac canh khi k = " << k << '\n';
			// Bởi vì ở các lần gọi đệ quy trước ta đã kiểm tra các ô nằm trên đường chéo phụ rồi
			// nên giờ ta chỉ cần kiểm tra các ô còn lại
			FOR(u, 1, k)
			{
				cout << "a[" << i + k << "][" << j + u << "] va a[" << i + u << "][" << j + k << "]\n";
				cout << a[i + k][j + u] << ' ' << a[i + u][j + k] << '\n';
				if(a[i + k][j + u] == 'O' || a[i + u][j + k] == 'O')
					return;
			}

			// Cập nhật kết quả
			ans = max(ans, k + 1);
			cout << "Cap nhat ket qua = " << ans << " khi k = " << k << '\n';
		}
	}
}
int main(){
	Hung;
	int t; cin >> t;
	while(t--){
		ans = 0; // kết quả
		cin >> n;

		for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> a[i][j];

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				// Chỉ tìm hình vuông khi ô hiện tại là X
				if(a[i][j] == 'X' && ans <= min(n - i - 1, n - j - 1)){
					cout << "i = " << i << " j = " << j << '\n';
					quay_lui(0);
				}
			}
		}
		cout << ans << '\n';
	}
}