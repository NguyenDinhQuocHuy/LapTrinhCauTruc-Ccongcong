#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;

// Khai bao nguyen mau ham
double CanBac2(double &n);
// Khai bao ham main
int main()
{
	double n;
	do
	{
		system("cls");
		cout << "Nhap mot so nguyen duong: "; cin >> n;
	} while (n <= 0);
	if (n > 0)
	{
		double kq = CanBac2(n);
		cout << "Can bac 2 cua " << n << " la: " << kq << endl;
	}
	_getch();
	return 0;
}

// Dinh nghia ham
double CanBac2(double &n)
{
	double t = n;
	while (t != n / t)
	{
		t = (t + n / t) / 2;
	}
	return t;	
}