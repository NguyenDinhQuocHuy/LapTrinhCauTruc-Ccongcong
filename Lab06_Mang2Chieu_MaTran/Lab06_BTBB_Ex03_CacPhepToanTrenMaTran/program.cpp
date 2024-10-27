#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	MaTran mt1, mt2, mtKQ;
	int capMT = 0;
	ChayChuongTrinh(mt1, mt2, mtKQ, capMT);
	_getch();
	return 0;
}

