#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#define     MAX     100
#define     KHOA    "Cong nghe thong tin"
#define     PI      3.1415926
#define     TAB     '\t'

int main()
{
	cout << endl << "Gia tri hang so MAX la : " << MAX;
	cout << endl << "Gia tri cua hang so KHOA la : " << KHOA;
	cout << endl << "Gia tri cua hang so PI la : " << PI;
	cout << endl << TAB << "Dong nay duoc thut le 1 dau TAB";
	
	float r;
	cout << endl << "Nhap ban kinh hinh tron : "; cin >> r;
	float chuVi, dienTich;
	chuVi = 2 * PI * r;
	dienTich = 2 * PI * r * r;
	cout << endl << "Ban kinh : R = " << fixed << setprecision(2) << r
		 << endl << "Chu vi : C = " << fixed << setprecision(2) << chuVi
		 << endl << "Dien tich : S = " << fixed << setprecision(2) << dienTich;
		 
	
	_getch();
	return 0;
}
