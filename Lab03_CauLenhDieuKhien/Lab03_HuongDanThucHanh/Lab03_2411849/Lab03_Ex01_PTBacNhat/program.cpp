#include<iostream>
#include<conio.h>
using namespace std;
double NhapHeSo(char kt);
void GiaiPTBacNhat(double a, double b);
int main()
{
	double a, b;
	a = NhapHeSo('a');
	b = NhapHeSo('b');
	GiaiPTBacNhat(a, b);
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
void GiaiPTBacNhat(double a, double b)
{
	double x;
	if (a == 0)
	{
		if (b == 0)
			cout << "Phuong trinh co vo so nghiem";
		else
			cout << "Phuong trinh vo nghiem";
	}
	else
		x = -b / a;
	cout << "phuong trinh co 1 nghiem duy nhat =" << x;

	return;
}