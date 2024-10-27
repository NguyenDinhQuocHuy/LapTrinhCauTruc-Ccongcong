#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	unsined int n;
	do
	{
		cout << endl << "Nhap mot so nguyen duong n: "; cin >> n;
	} while (n <= 0);
	ChayChuongTrinh(n);
	_getch();
	return 0;
}