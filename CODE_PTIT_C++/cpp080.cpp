#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fi first
#define se second
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int demKh = 1, demMh = 1, demHd = 1;

map<string, string> khMap;
map<string, string> mhMap;

class KhachHang{
	public:
		string khId = "KH", khTen, gt, ns, dc;
		friend istream &operator >> (istream in, KhachHang kh){
			getline(in, kh.khTen);
			getline(in, kh.gt);
			getline(in, kh.ns);
			getline(in, kh.dc);
			
			string id = to_string(demKh);
			if(id.length() < 3) id = "0" + id;
			kh.khId += id;
			++demKh;
			
			return in;
		}	
};

class MatHang{
	public:
		string mhId = "MH", mhTen, dvt;
		int giaMua, giaBan;
		friend istream &operator>>(istream in, MatHang mh){
			getline(in, mh.mhTen);
			getline(in, mh.dvt);
			in >> mh.giaMua >> mh.giaBan;
			in.ignore();
			
			string id = to_string(demMh);
			if(id.length() < 3) id = "0" + id;
			md.mhId += id;
			++demMh;
			return in;
		}
};

class HoaDon{
	public:
		string hdId = "HD", khId, mhId;
		int slg;
		friend istream &operator >> (istream in, HoaDon hd){
			
		}
			
};
int main(){
	Hung;
	KhachHang kh[1005];
	MatHang mh[1005];
	HoaDon hd[1005];
	
	fstream fs1, fs2, fs3;
	fs1.open("KH.in");
	fs2.open("MH.in");
	fs2.open("HD.in");
	
	int n, m, k;
	fs1 >> n;
	FOR(i, 1, n){
		fs1 >> kh[i];
	}
}