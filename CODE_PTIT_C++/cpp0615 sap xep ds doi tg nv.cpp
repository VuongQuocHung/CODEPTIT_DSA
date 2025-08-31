#include <bits/stdc++.h>
using namespace std;
int i = 1;
class NhanVien{
public:
    string id, ten, gt, dc, mst, hd;
    int d, m, y;

    friend istream& operator>>(istream& in, NhanVien& nv){
        scanf("\n");
        nv.setId();
        getline(in, nv.ten);
        getline(in, nv.gt);
        scanf("%d/%d/%d\n", &nv.m, &nv.d, &nv.y);
        getline(in, nv.dc);
        getline(in, nv.mst);
        getline(in, nv.hd);
        return in;
    }
    friend ostream& operator<<(ostream& out, NhanVien& nv){
        out << nv.id << ' ' << nv.ten << ' ' << nv.gt << ' ';
        printf("%.2d/%.2d/%.4d ", nv.m, nv.d, nv.y);
        out << nv.dc << ' ' << nv.mst << ' ' << nv.hd << '\n';
        return out;
    }
    void setId(){
        string ma = to_string(i);
        while(ma.length() < 5) ma = "0" + ma;
        ++i;
        id = ma;
    }
};
bool cmp(NhanVien& a, NhanVien& b){
    if(a.y < b.y) return 1;
    if(a.y == b.y){
        if(a.m < b.m) return 1;
        if(a.m == b.m){
            if(a.d < b.d) return 1;
        }
    }
    return 0;
}
void sapxep(NhanVien ds[], int n){
    sort(ds, ds + n, cmp);
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}