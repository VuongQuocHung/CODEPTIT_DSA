#include <bits/stdc++.h>
using namespace std;
int thuan_nghich(string s){
	int l = 0, r = s.length()-1;
	while( l <= r){
		if(s[l] != s[r]) return 0;
		++l; --r;
	}
	return 1;
}
//2: ABC, 3: DEF, 4: GHI, 5: JKL
//6: MNO, 7: PQRS, 8: TUV, 9: WXYZ
char change( char c){
	if (c >= 'A' && c <= 'C') return '2';
    if (c >= 'D' && c <= 'F') return '3';
    if (c >= 'G' && c <= 'I') return '4';
    if (c >= 'J' && c <= 'L') return '5';
    if (c >= 'M' && c <= 'O') return '6';
    if (c >= 'P' && c <= 'S') return '7';
    if (c >= 'T' && c <= 'V') return '8';
    if (c >= 'W' && c <= 'Z') return '9';
    return '0';
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string num="";
		string s; cin>>s;
		for( char c : s){
			c = toupper(c);
			num += change(c);
		}
		//cout<<num<<"\n";
		if(thuan_nghich(num)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}