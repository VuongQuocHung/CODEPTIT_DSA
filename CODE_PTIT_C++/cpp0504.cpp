#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name, lop, date;
	double gpa;
};
void nhap(struct SinhVien &a){
	getline(cin, a.name); cin>>a.lop;
	cin>>a.date; cin>>a.gpa;
}
void chuan_hoa(string s){
	string word[10];
	stringstream ss( s);
	int cnt = 0;
	while(getline(ss, word[cnt], '/')){
		++cnt;
	}
	for(int i=0; i<cnt-1; i++){
		if(word[i].length()<2){
			word[i] = '0'+ word[i];
		}
		cout<<word[i]<<"/";
	}
	cout<<word[cnt-1]<<" ";
}
void in(struct SinhVien &a){
	cout<<"B20DCCN001 "<<a.name<<" "<<a.lop<<" ";
	chuan_hoa(a.date);
	cout<<setprecision(2)<<fixed<<a.gpa;
};
int main(){
	struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}