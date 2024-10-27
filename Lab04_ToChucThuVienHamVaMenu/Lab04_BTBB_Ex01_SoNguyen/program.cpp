#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

// Ham main
int main()
{
	int n;
	do
	{
		cout << "Nhap mot so nguyen duong n: "; cin >> n;
	} while (n <= 0);
	ChayChuongTrinh(n);

	_getch();
	return 0;
}

