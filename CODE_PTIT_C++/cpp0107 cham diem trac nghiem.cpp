#include <bits/stdc++.h>
using namespace std;
string de1 ="ABBADCCABDCCABD";
string de2 ="ACCABCDDBBCDDBB";
int main(){
	int t; cin>>t;
	while(t--){
		int de; cin>>de;
		int cnt = 0;
		char c;
		if(de == 101){
			for(int i=0; i<15; i++){
				cin>>c;
				if(c == de1[i]) cnt++;
			}
		}else{
			for(int i=0; i<15; i++){
				if(c == de2[i]) cnt++;
			}
		}
		double diem = (double)cnt/15 * 10;
		cout<<setprecision(2)<<fixed<<diem<<"\n";
	}
}