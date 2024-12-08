#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DSTB ds = {
		{"DT12045", "Dien Thoai", 2021, 2, 10.50},
		{"MQ43210", "May quat", 2020, 1, 200.00},
		{"MT23452", "May Tinh Dell", 2021, 10, 30.75},
		{"TL44432", "Tu lanh", 2022, 5, 50.00},
		{"MT12332", "May Tinh HP", 2020, 1, 200.00}
	};
	int soLuong = 5;
	ChayChuongTrinh(ds, soLuong);
	return 1;
}