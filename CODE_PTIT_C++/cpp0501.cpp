#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
void input( struct Point &n){
	cin>>n.x>>n.y;
}
double distance(struct Point a, struct Point b){
	double r = sqrt( (a.x - b.x ) * (a.x - b.x ) + (a.y-b.y ) *( a.y - b.y ) );
	return r;
}
int main(){
	/*int t; cin>>t;
	while(t--){
		struct point a,b;
		cin>>a.x>>a.y>>b.x>>b.y;
		double r = sqrt( (a.x - b.x ) * (a.x - b.x ) + (a.y-b.y ) *( a.y - b.y ) );
		cout<<setprecision(4)<<fixed<<r<<"\n";
	}*/
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;

}
	