#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	ChayChuongTrinh(x);
	_getch();
	return 0;
}