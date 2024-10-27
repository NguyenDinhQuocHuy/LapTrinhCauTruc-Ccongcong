#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	// Khai bao bien va nhap gia tri cho x, y
	int x, y;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	cout << "Gia tri ban dau cua x= " << x << ", y= " << y << endl;
	// Lenh x++
	x++;
	cout << "Sau lenh x++, x= " << x << ", y= " << y << endl;
	// Lenh x--
	x--;
	cout << "Sau lenh x--, x= " << x << ", y= " << y << endl;
	// Lenh ++x
	++x;
	cout << "Sau lenh ++x, x= " << x << ", y= " << y << endl;
	// Lenh --x
	--x;
	cout << "Sau lenh --x, x= " << x << ", y= " << y << endl;
	// Lenh x = x / y
	x = x / y;
	cout << "Sau lenh x = x / y, x= " << x << ", y= " << y << endl;
	// Lenh y = x % y
	y = x % y;
	cout << "Sau lenh y = x % y, x= " << x << ", y= " << y << endl;
	// Lenh x*=y
	x *= y;
	cout << "Sau lenh x *= y, x= " << x << ", y= " << y << endl;
	
	_getch();
	return 0;
	
}
