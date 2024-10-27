#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

// Khai bao nguyen mau ham
void UocChung(int m, int n);
int TimUocChungLonNhat(int m, int n);
int TimBoiChungNhoNhat(int m, int n);
int TongUocM(int m);

// Khai bao ham main
int main()
{
	int m, n;
	cout << "Nhap so nguyen m va n: "; cin >> m >> n;
	cout << "Uoc chung cua " << m << " va " << n << " la: ";
	UocChung(m, n);
	
	int uocChungLN = TimUocChungLonNhat(m, n);
	cout << "Uoc chung lon nhat cua " << m << " va " << n << " la: " << uocChungLN << endl;

	int boiChungNN = TimBoiChungNhoNhat(m, n);
	cout << "Boi chung nho nhat cua " << m << " va " << n << " la: " << boiChungNN << endl;

	int tong = TongUocM(m);
	cout << "Kiem tra tong cac uoc cua " << m << " co bang " << n << " hay khong ? " << endl;
	if (tong == n)
		cout << "Tong cac uoc cua " << m << " bang " << n;
	else
		cout << "Tong cac uoc cua " << m << " khong bang " << n;

	_getch();
	return 0;
}

// Dinh nghia ham

int TimUocChungLonNhat(int m, int n)  // PP Euclid: Tiep tuc tim phan du cho den khi phan du bang 0
{
	while (n != 0)
	{
		int gtn = n;  // Luu gia tri cua n
		n = m % n;    // Tinh phan du cua m chia cho n
		m = gtn;      // Cap nhat m bang gia tri cu cua n
	}
	return m;         // Khi n = 0, m la uoc chung lon nhat
}

int TimBoiChungNhoNhat(int m, int n)
{
	int ucln = TimUocChungLonNhat(m, n);
	return abs(m * n) / ucln;
}

void UocChung(int m, int n)
{
	int nho = min(m, n);
	cout << "Cac uoc chung cua " << m << " va " << n << " la: ";
	for (int i = 1; i <= nho; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

int TongUocM(int m)
{
	int tong = 0;
	for (int i = 1; i <= m; i++)
	{
		if (m % i == 0)
		{
			tong += i;
		}
	}
	return tong;
}
