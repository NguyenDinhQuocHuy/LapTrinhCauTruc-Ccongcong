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
	DSQL ds = {
		{"50B-18377", "Aero Space", 2020, "Hyundai", 3077},
		{"50B-14766", "Hi Class", 2022, "Hyundai", 3200},
		{"51B-61840", "Universe", 2021, "Haeco", 2550},
		{"51B-44745", "Universe", 2022, "Thaco", 2565},
		{"51B-39843", "Universe Advance", 2021, "Hyundai", 3800}
	};
	int soXe = 5;
	ChayChuongTrinh(ds, soXe);
	_getch();
	return 1;
}