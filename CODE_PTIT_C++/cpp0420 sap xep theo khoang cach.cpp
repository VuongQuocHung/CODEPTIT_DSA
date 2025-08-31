#include <bits/stdc++.h>
using namespace std;
int x;
bool cmp(int a, int b){
	return abs(x - a) < abs(x - b);
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n>>x; int arr[n];
		for(int& i : arr){
			cin>>i;
		}
		stable_sort(arr, arr + n, cmp);
		for(int i : arr){
			cout<<i<<' ';
		}
		cout<<'\n';
	}
}