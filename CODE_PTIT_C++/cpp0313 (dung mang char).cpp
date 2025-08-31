#include <bits/stdc++.h>
using namespace std;
void change(char xau[], char tu[]){
	int n = strlen(xau), m = strlen(tu);
	char* pos = strstr(xau, tu);
	while(pos != NULL){
		int vt = pos - xau;
		for(int i = vt; xau[i + m] != '\0'; i++){
			xau[i] = xau[i + m];
		}
		xau[n - m] = '\0';
		pos = strstr(xau, tu);
	}
}
int main(){
	char xau[100001]; 
	char tu[101];
	cin.getline(xau, 1000001);
	cin>>tu;
	change(xau, tu);
	cout<<xau<<'\n';
}