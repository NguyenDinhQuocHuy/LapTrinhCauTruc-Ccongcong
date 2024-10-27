#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include <time.h>  // De su dung time
#include <cstdlib> // Su dung srand va rand

using namespace std;

// Khai bao nguyen mau ham
int SinhSo(int k);
void DoanSo(int so, int k);
// Khai bao ham main
int main()
{
	int k;
	cout << "Nhap so lan doan k: "; cin >> k;
	system("cls");
	cout << "Chao mung cac ban den voi tro choi doan so !" << endl;
	cout << "Ban co toi da " << k << " lan de doan so !" << endl;
	int soDung = SinhSo(k);
	DoanSo(soDung, k);
	
	_getch();
	return 0;
}

// Dinh nghia ham
// Ham Sinh So
int SinhSo(int k)
{
	srand(time(NULL));
	return rand() % (1 << k) + 1; // So ngau nhien tu 1 den 2^k
}

// Ham DoanSo
void DoanSo(int so, int k)
{
	int doan;
	bool doanDung = false;
	

	for (int i = 0; i < k; i++)
	{
		cout << "Lan " << (i + 1) << ", nhap so ban can doan: "; cin >> doan;
		if (doan < so)
			cout << "So can doan lon hon !" << endl;
		else if (doan > so)
			cout << "So can doan nho hon ! " << endl;
		else
		{
			cout << "Chuc mung ! Ban da doan trung so !!!" << endl;
			doanDung = true;
			break;
		}
			
	}	
	if (!doanDung)
	{
		cout << "Ban da thua ! So dung la: " << so << endl;
	}
}



