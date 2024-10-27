#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;

//7. Ước số:

//a. Xuất tất cả các ước của n:
/*
void TimUocN(int n);

int main()
{
	int n;
	cout << endl << "nhap n: ";
	cin >> n;
	cout << endl << "Tat ca ca uoc cua n = "<<n<<" la: "; TimUocN(n);
	_getch();
	return 0;
}

void TimUocN(int n) //không cần trả về giá trị nào nên dùng void
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << ", ";
		}
	}
}
*/

//b. đếm số lượng ước của n:
/*
int TimSoLuongUoc(int n);

int main()
{
	int n;
	cout << endl << "nhap n: ";
	cin >> n;
	cout << endl << "So luong cac uoc cua n = " << n << " la: " << TimSoLuongUoc(n);
	_getch();
	return 0;
}

int TimSoLuongUoc(int n) //khác với bài a, cần trả về số lượng nên dùng int
{
	int soLuong;
	soLuong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			soLuong ++;
		}
	}
	return soLuong;
}
*/

//c. tính tổng số ước của n:
/*
int TinhTongSoUoc(int n);

int main()
{
	int n;
	cout << endl << "nhap n: ";
	cin >> n;
	cout << endl << "Tong cac uoc cua n = " << n << " la: " << TinhTongSoUoc(n);
	_getch();
	return 0;
}

int TinhTongSoUoc(int n)
{
	int tong, uoc;
	tong = 0;
	uoc = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			uoc = i;
			tong += uoc;
		}
	}
	return tong;
}
*/

//d. tính căn bậc 2 không dùng sqrt:
/*
int CanBac2(int n);

int main()
{
	int n;
	cout << endl << "nhap n: ";
	cin >> n;
	cout << endl << "can bac 2 cua " << n << " la: " << CanBac2(n);
	_getch();
	return 0;
}

int CanBac2(int n)
{
	if (n < 0)
	{
		cout << endl << "nhap n: ";
		cin >> n;
	}
	if (n == 0 && n == 1)
		return n; // căn bậc 2 của 0 và 1 là 0 và 1
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
		{
			return i;
		}
		else if (i * i > n)
			return i-1; //trả về giá trị của số nguyên trước đó
	}
	return 0;
}
*/

//e. tìm số lớn nhất <= n mà là lũy thừa của 2:
int SoLonNhat(int n);

int main()
{
	int n;
	cout << endl << "nhap n: ";
	cin >> n;
	cout << endl << "so lon nhat <= " << n << " la luy thua cua 2 la: " << SoLonNhat(n);
	_getch();
	return 0;
}

int SoLonNhat(int n)
{
	int max = 2;
	while (max * 2 <= n) 
	{
		max *= 2;
	}
	return max;
}