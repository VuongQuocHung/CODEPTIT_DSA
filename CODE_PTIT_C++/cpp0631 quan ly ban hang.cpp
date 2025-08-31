#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fspr(n) fixed << setprecision(n)

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using vpi = vector<pair<int, int>>;
using vpp = vector<pair<pair<int, int>, int>>;

int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang{
public:
	string maKH, ten, gioiTinh, ngaySinh, diaChi;
	friend istream& operator>>(istream& in, KhachHang& a){
		if(cntkh == 0) in.ignore();
		getline(in, a.ten);
		getline(in, a.gioiTinh);
		getline(in, a.ngaySinh);
		getline(in, a.diaChi);

		++cntkh;
		string id = to_string(cntkh);
		while(id.length() < 3) id = "0" + id;
		a.maKH = "KH" + id;

		KH[a.maKH] = a;

		return in;
	}
	friend class HoaDon;
};

class MatHang{
public:
	string maMH, ten, donViTinh;
	int giaMua, giaBan;
	friend istream& operator>>(istream& in, MatHang& a){
		in.ignore();
		getline(in, a.ten);
		getline(in, a.donViTinh);
		in >> a.giaMua >> a.giaBan;

		++cntmh;
		string id = to_string(cntmh);
		while(id.length() < 3) id = "0" + id;
		a.maMH = "MH" + id;

		MH[a.maMH] = a;

		return in;
	}
	friend class HoaDon;
};

class HoaDon{
public:
	string maHD, maKH, maMH;
	ll soLuong;
	friend istream& operator>>(istream& in, HoaDon& a){
		in.ignore();
		in >> a.maKH >> a.maMH >> a.soLuong;
		
		++cnthd;
		string id = to_string(cnthd);
		while(id.length() < 3) id = "0" + id;
		a.maHD = "HD" + id;
		return in;
	}

	friend ostream& operator<<(ostream& out, HoaDon& a){
        out << a.maHD << ' ' << KH[a.maKH].ten << ' ' << KH[a.maKH].diaChi << ' ' << MH[a.maMH].ten << ' ';
        out << MH[a.maMH].donViTinh << ' ' << MH[a.maMH].giaMua << ' ' << MH[a.maMH].giaBan << ' ';
        out << a.soLuong << ' ' << MH[a.maMH].giaBan * a.soLuong << '\n';
		return out;
	}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}