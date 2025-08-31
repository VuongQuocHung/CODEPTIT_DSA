#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten, lop;
	int d, m , y;
	float gpa;
};
string chuan_hoa_msv(int i){
	string s = to_string(i);
	while( s.length() < 3){
		s = "0" + s;
	}
	return "B20DCCN" + s;
}
string chuan_hoa_ten(string& s){
	stringstream ss(s);
	string word;
	string res="";
	while( ss >> word ){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.length(); i++){
			word[i] = tolower(word[i]);
		}
		res = res + word + " ";
	}
	return res;
}
void nhap(SinhVien ds[], int n){
	for(int i = 1; i<=n; i++){
		scanf("\n");
		ds[i].msv = chuan_hoa_msv(i);
		getline(cin, ds[i].ten);
		ds[i].ten = chuan_hoa_ten(ds[i].ten); 
		getline(cin, ds[i].lop);
		scanf("%d/%d/%d %f", &ds[i].d, &ds[i].m, &ds[i].y, &ds[i].gpa);
	}
}
void in(SinhVien ds[], int n){
	for(int i = 1; i<=n; i++){
		cout<<ds[i].msv<<' '<<ds[i].ten<<' '<<ds[i].lop<<' ';		
		printf("%02d/%02d/%.4d %.2f\n", ds[i].d, ds[i].m, ds[i].y, ds[i].gpa);
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}