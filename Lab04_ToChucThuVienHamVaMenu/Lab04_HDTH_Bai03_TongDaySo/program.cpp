#include<iostream>
#include<conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	unsigned int n;
	do
	{
		cout << endl << "Nhap mot so nguyen duong"; cin >> n;
	} while (n < 0);
	ChayChuongTrinh(n);

	_getch();
	return 0;
}
	