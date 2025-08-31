#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> thaythe(int digit){
	vector<int> res;
	if(digit == 1 || digit == 0) return res;
	if(digit == 2) res.push_back(2);
	else if(digit == 3) res.push_back(3);
	else if(digit == 4) res = {3,2,2};// 4 = 3 * 2 * 2
	else if(digit == 5) res.push_back(5);
	else if(digit == 6) res = {5, 3};    // 6 = 5 * 3
    else if(digit == 7) res.push_back(7);
    else if(digit == 8) res = {7, 2, 2, 2}; // 8 = 7 * 2 * 2 * 2
    else if(digit == 9) res = {7, 3, 3, 2}; // 9 = 7 * 3 * 3 * 2
    return res;
}
int main(){
	int t; cin>>t;;
	while(t--){
		int n, x; cin>>x;
		
	}
}