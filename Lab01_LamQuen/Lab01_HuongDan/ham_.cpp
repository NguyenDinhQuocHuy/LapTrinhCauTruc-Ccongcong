# include <iostream>
using namespace std;

1. Nhap dai, rong tu ban phim, tinh dien tich hinh chu nhat:

int TimDienTichHCN (int x, int y) {
    int S;
    S=x*y;
    return S;
}
int main() {
    int a, b;
    cout << "Nhap chieu dai va chieu rong hcn: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Dien tich hinh chu nhat la: "<<TimDienTichHCN(a,b);
     return 0;
}

2. Tim so lon nhat trong 3 so a,b,c nhap tu ban phim
    
 int TimSoLonNhat( int x, int y, int z) {
    int max;
    max=x;
    if (max < y) {
        max=y;
    }
    if ( max<z){
        max=z;
    }
    return max;
}

int main() {
    int a,b,c,max;
    cin>>a;
    cin>>b;
    cin>>c;
    cout << "So lon nhat trong 3 so la: "<<TimSoLonNhat(a,b,c)<<endl;
    return 0;
}
  