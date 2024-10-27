#include <bits/stdc++.h>   
#include <conio.h>

using namespace std;
int main()
{
	int x, y, n;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	cout << "Nhap n: "; cin >> n;
    int ketQua;
	ketQua = pow (x, n) + pow (y, n);
	cout << "Ket qua cua bieu thuc la: " << ketQua << endl;
	_getch();
	return 0;
}
