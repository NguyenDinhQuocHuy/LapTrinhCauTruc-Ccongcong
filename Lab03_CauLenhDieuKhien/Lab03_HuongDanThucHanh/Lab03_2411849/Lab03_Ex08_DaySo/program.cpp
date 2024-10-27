#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
#define TAB '\t'

using namespace std;

//a.
double Harmonic(int n); //double vì phân số có thể không cho ra số nguyên, câu d dùng số thực

int main()
{
	int n;
	char cau;
	cout << endl << "nhap mot so nguyen duong n = "; cin >> n;
	cout << end << "Nhap cau can tinh toan: "; cin >> cau;
	TinhTong(n);
	double kq = TinhTong(n);
	cout << fixed << setprecision(4);// dùng với thư viện iomanip để định dạng kết quả
	cout << endl << "tong cua ham HN = " << kq;
	_getch();
	return 0;
}

/*double TinhTong(int n)
{
	double tong = 0.0;
	// viết bằng for

	for (int i = 1; i <= n; i++)
	{
		tong += 1.0 / i;
	}
	*/

	// viết bằng while
	/*
	int i = 1;
	while (i <= n)
	{
		tong += 1.0 / i;
		i++;
	}
	*/

	// viết bằng do..while	
	/*
	int i = 1;
	do
	{
		tong += 1.0 / i;
		i++;
	} while (i <= n);


	return tong;
}
*/
*double TinhTong(int n)
{
	double tong = 0.0;
	int cau;
	switch (cau)
	{
	case a:
	{
		for (int i = 1; i <= n; i++)
		{
			tong += 1.0 / i;
		}
		break;
	}
	case b:
	{
		for (int i = 1; i <= n; i++)
		{
			tong += 1.0 * (i + 1) / pow(i, 2);
		
		}
	}
		break;
		
	case c:
	{
		for (int i = 1; i <= n; i++)
		{
			tong += 1.0 * (pow(-1, i) * i) / (i + 1);
		}
		
		break;
	}
	case d:
	{
		for (int i = 1; i <= n; i++)
		{
			tong += 1.0 / (i * (i + 1));
		}
		break;
	}
	case e:
	{
		int giaiThua = 1
			for (int i = 1; i <= n; i++)
			{
				giaiThua *= i;
				tong += giaiThua;
			}
		break;
	}
	}
	return tong;

}
