#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DSTB ds = {
		{"101", "Nguyen Dinh Quoc Huy", "B46 Mac Dinh Chi", {"49", "48198812"}, {10, 5, 2023}},
		{"102", "Nguyen Thi Thuy Trang", "B46 Mac Dinh Chi", {"40", "89772889"}, {12, 5, 2021}}
	};
	int soTB = 2;
	ChayChuongTrinh(ds, soTB);
	_getch();
	return 1;
}