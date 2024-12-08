#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	MangNV cty = {
		{109, "Nguyen Thanh Van", "Nam", "1C Bui Thi Xuan", {12, 3, 1988}, 2.6f},
		{218, "Pham Van Nam", "Nam", "56Bis Nguyen Thi Nghia", {6, 11, 1990}, 2.3f},
		{327, "Tran Dinh Cong", "Nam", "30 Nguyen Cong Tru", {19, 8, 1983}, 3.7f},
		{436, "Phan Trung Hieu", "Nam", "6 Phu Dong Thien Vuong", {16, 2, 1987}, 2.9f},
		{545, "Doan Chinh Thuan", "Nam", "11B Dinh Tien Hoang", {8, 8, 1988}, 1.6f},
		{110, "Nguyen Thi Yen", "Nu", "B46 Mac Dinh Chi", {17, 2, 1981}, 4.9f},
		{205, "Nguyen Dinh Quoc Huy", "Nam", "B46 Mac Dinh Chi", {10, 5, 2005}, 5.0f},
		{103, "Nguyen Thi Thuy Trang", "Nu", "B46 Mac Dinh Chi", {23, 3, 2007}, 1.0f}
	};
	
	int soNV = 7;
	ChayChuongTrinh(cty, soNV);
	return 1;
}
