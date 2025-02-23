#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DSSV ds = {
		{"100", "Nguyen Dinh Quoc", "Huy", "M", 9.2f, "CTK48B"},
		{"101", "Nguyen Nguyen Bao", "Long", "M", 9.0f, "CTK48B"},
		{"102", "Duong Minh", "Tuan", "M", 8.5f, "CTK48B"},
		{"103", "Nguyen Thi", "Yen", "F", 8.8f, "CTK48A"},
		{"104", "Nguyen Thi Thuy", "Trang", "F", 1.2f, "CTK48A"},
		{"105", "Nguyen Hoang Hai", "Yen", "F", 4.5f, "CTK48A"},
		{"106", "Huynh Phuc", "Lam", "M", 9.7f, "CTK48B"}
	};
	int soSV = 7;
	ChayChuongTrinh(ds, soSV);
	_getch();
	return 1;
}