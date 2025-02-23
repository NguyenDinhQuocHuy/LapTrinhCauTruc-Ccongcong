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
	DSTL ds = {
		{"001", "Tieu luan phap luat", "Luan van", 2024, "Nhom 4", "", 30000.0f},
		{"002", "Bup sen xanh", "Sach", 2021, "Son Tung", "Kim Dong", 12000.0f}
	};
	int soTL = 2;
	ChayChuongTrinh(ds, soTL);
	_getch();
	return 1;
}