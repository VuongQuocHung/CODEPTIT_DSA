#include <bits/stdc++.h>
using namespace std;
int dd[26];
int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char ch[1001];
		cin>>ch;
		for(int i = 0; ch[i] != '\0'; i++){
			dd[ch[i] - 'A']++;
		}
		for(int i = 0; ch[i] != '\0'; i++){
			if(dd[ch[i] - 'A'] == 1){
				cout<<ch[i];
			}
		}
		memset(dd, 0, sizeof(dd));
		cout<<'\n';
	}
}