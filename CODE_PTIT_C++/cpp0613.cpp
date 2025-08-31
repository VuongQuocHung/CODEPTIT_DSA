#include <bits/stdc++.h>
using namespace std;
int id = 1;
class SinhVien{
private:
	string msv, ten, lop, ns;
	double gpa;
public:
	friend istream& operator>>(istream& in, SinhVien& sv){
		scanf("\n");
		sv.setMSV();
		getline(in, sv.ten);
		getline(in, sv.lop);
		getline(in, sv .ns);
		in >> sv.gpa;
		return in;
	}
	string chuanHoaNS(){
		string date = ns;
		if(date[1] == '/') date = date.insert(0, "0");
		if(date[4] == '/') date = date.insert(3, "0");
		return date;
	}
	string chuanHoaTen(){
		for(char&ch : ten) ch = tolower(ch);
		stringstream ss(ten);
	    string word;
	    string res = "";
	    while(ss >> word){
	    	word[0] = toupper(word[0]);
	    	res += word + " ";
	    }
	    res.pop_back();
	    return res;
	}
	double getGpa(){
		return gpa;
	}
	void setMSV(){
		string ma = to_string(id);
		while(ma.length() < 3) ma = "0" + ma;
		++id;
		msv = "B20DCCN" + ma;
	}
	friend ostream& operator<<(ostream& out, SinhVien& sv){
		out << sv.msv << ' ' << sv.chuanHoaTen() << ' ' << sv.lop << ' '; 
		out << sv.chuanHoaNS() << ' ';
		out << fixed << setprecision(2) << sv.gpa << '\n';
		return out;
	}
};
bool cmp(SinhVien& a, SinhVien& b){
		return a.getGpa() > b.getGpa();
	}
void sapxep(SinhVien ds[], int n){
	sort(ds, ds + n, cmp);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}