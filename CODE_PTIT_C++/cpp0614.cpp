#include <bits/stdc++.h>
using namespace std;
int i = 1;
class NhanVien{
private:
    string id, ten, gt, ns, dc, mst, hd;
public:
    friend istream& operator>>(istream& in, NhanVien& nv){
        scanf("\n");
        nv.setId();
        getline(in, nv.ten);
        getline(in, nv.gt);
        getline(in, nv.ns);
        getline(in, nv.dc);
        getline(in, nv.mst);
        getline(in, nv.hd);
        return in;
    }
    friend ostream& operator<<(ostream& out, NhanVien& nv){
        out << nv.id << ' ' << nv.ten << ' ' << nv.gt << ' ';
        out << nv.ns << ' ' << nv.dc << ' ' << nv.mst << ' ' << nv.hd << '\n';
        return out;
    }
    void setId(){
        string ma = to_string(i);
        while(ma.length() < 5) ma = "0" + ma;
        ++i;
        id = ma;
    }
};
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}