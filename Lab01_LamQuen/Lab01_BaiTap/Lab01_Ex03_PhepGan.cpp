#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
main()
{
	int x, y;
	int a, b, c;
	float d;
	cout << "Nhap gia tri cua x : ";
	cin >> x;
	cout << "Nhap gia tri cua y : ";
	cin >> y;
	a = x + y;
	b = x - y;
	c = x * y;
	d = (float) x / y;
	cout << a << endl
		 << b << endl
		 << c << endl
		 << d << endl
		 << endl;
	return 0;
}
