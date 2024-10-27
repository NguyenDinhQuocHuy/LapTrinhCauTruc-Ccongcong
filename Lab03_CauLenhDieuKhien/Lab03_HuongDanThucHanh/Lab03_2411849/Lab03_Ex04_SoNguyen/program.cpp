#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>

using namespace std;

#define TAB "\t"

// Khai bao nguyen mau ham
void LietKe(int n);
int DemSo(int n);
int DemSoChuSo(int n);
int DaoNguoc(int n);
int TongSoN(int n);
int SoDauTien(int n);

// Ham main
int main()
{
	int n, dem, count, tongN;
	do
	{
		system("cls");
		cout << "Nhap mot so nguyen n: "; cin >> n;
	} while (n <= 0);
	cout << "Cau a: Xuat cac so tu 1 den n" << endl;
	LietKe(n);

	cout << "Cau b: Dem so luong cac so chia het cho 3 ma ko chia het cho 4" << endl;
	dem = DemSo(n);
	cout << "Co " << dem << " so chia het cho 3 ma khong chia het cho 4" << endl;

	cout << "Cau c: Dem so luong chu so cua n: " << endl;
	count = DemSoChuSo(n);
	cout << "So chu so cua n la: " << count << endl;

	cout << "Cau d: Dao nguoc so n" << endl;
	int daoNguoc = DaoNguoc(n);
	cout << "So dao nguoc cua n la: " << daoNguoc << endl;

	cout << "Cau e: Tinh tong cac chu so trong n" << endl;
	tongN = TongSoN(n);
	cout << "Tong cac chu so cua n la: " << endl;
	
	cout << "Cau f: Cho biet chu so dau tien cua n" << endl;
	int so1 = SoDauTien(n);
	cout << "Chu so dau tien cua n la: " << so1 << endl;

	_getch();
	return 0;
}

// Khai bao nguyen mau ham
void LietKe(int n)
{
	for (int i = 0; i <= n; i++)
		cout << i << TAB;
}
int DemSo(int n)
{
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0 && i % 4 != 0)
			dem += 1;
	}
	return dem;
}

int DemSoChuSo(int n)
{
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

int DaoNguoc(int n)
{
	int daoNguoc = 0;
	while (n != 0)
	{
		int soNguoc = n % 10;
		daoNguoc = daoNguoc * 10 + soNguoc;
		n /= 10;
	}
	return daoNguoc;
}

int TongSoN(int n)
{
	int tong = 0;
	int dem = 0;
	while (n != 0)
	{
		n /= 10;
		dem++;
		tong += dem;
	}
	return tong;

}

int SoDauTien(int n)
{
	n = abs(n);
	while (n >= 10)
	{
		n /= 10;
	}
	return n;
}