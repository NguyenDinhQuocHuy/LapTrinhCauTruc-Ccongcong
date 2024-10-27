#include<iostream>
#include<conio.h>
using namespace std;
double NhapHeSo(char kt);
double TinhBieuThuc(double x, double y, char k);
int main()
{
	double x, y;
	char k;
	x = NhapHeSo('x');
	y = NhapHeSo('y');
	cout << "nhap vao phep toan +-*/: ";
	cin >> k;
	TinhBieuThuc(x, y, k);
	_getch();
	return 0;
}
double NhapHeSo(char kt)
{
	double n;
	cout << "nhap vao gia tri " << kt << "=";
	cin >> n;
	return n;
}
double TinhBieuThuc(double x, double y, char k)
{
	switch (k)
	{
	case '+':
		cout << "tong =" << x + y;
		break;
	case '-':
		cout << "hieu =" << x - y;
		break;
	case'*':
		cout << "tich =" << x * y;
		break;
	case'/':
		cout << "thuong=" << x / y;
		break;
	}
	return 0;
}
