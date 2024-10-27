#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{
	int a, b, c;
	float p, chuVi, dienTich;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
	chuVi = a + b + c;
	p = chuVi / 2.0;
	dienTich = sqrt( p * (p + a) * (p + b) * (p + c));
	cout << "Chu vi cua tam giac la: " << chuVi << endl;
	cout << "Dien tich cua tam giac la: " << dienTich << endl;
	_getch();
	return 0;
}
