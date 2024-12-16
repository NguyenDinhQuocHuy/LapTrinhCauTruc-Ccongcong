#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

#include "2411849Thuvien.h"
#include "2411849Menu.h"

int main()
{
	DSHH ds = {
		{"VP01", "But chi", "Cay", "Trung Quoc", 3000, {23, 12, 2022}, 10},
		{"VP02", "But chi", "Cay", "Thai Lan", 5000, {12, 8, 2023}, 10},
		{"VP03", "But chi", "Cay", "Viet Nam", 5000, {16,10, 2023}, 10},
		{"BK01", "Banh quy thap cam", "Hop", "Viet Nam", 115000, {28, 10, 2023}, 5},
		{"BK02", "Banh quy kem", "Goi", "Indonesia", 6000, {1, 11, 2023}, 15},
		{"NU01", "Nuoc ngot soda chanh", "Thung", "Viet Nam", 230000, {11, 11, 2023}, 12},
		{"NU02", "Sua bo tiet trung", "Goi", "Viet Nam", 6000, {20, 12, 2022}, 50}
	};
	int soHH = 7;
	ChayChuongTrinh(ds, soHH);
	_getch();
	return 1;
}