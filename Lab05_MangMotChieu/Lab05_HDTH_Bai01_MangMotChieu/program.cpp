#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#include<time.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DaySo mmc;           // Khai bien mang mot chieu
	int soPT = 0;        // Khai bao bien luu so phan tu
	ChayChuongTrinh(mmc, soPT);

	_getch();
	return 0;
}