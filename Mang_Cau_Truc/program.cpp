#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	MangTB tb = {
		{"DT12045", "Dien thoai", 2021, 2, 10.50f},
		{"MQ43210", "May quat", 2020}, 1, 200.00f },
		{"MT23452", "May tinh Dell", 2021, 10, 30.75f},
		{"TL44432", "Tu lanh", 2022, 5, 50.00f},
		{"MT12332", "May tinh HP"}
	};
	int soTB = 5;
	ChayChuongTrinh(tb, soTB);
	_getch();
	return 1;
}