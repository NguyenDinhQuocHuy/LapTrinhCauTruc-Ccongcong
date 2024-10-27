#include <iostream>
#include <conio.h>

#define    MAX    3600
#define    SIXTY  60
using namespace std;
int main()
{
	int n, gio, phut, giay;
	cout << "Nhap so giay: ";
	cin >> n;
	gio = n / MAX;
	phut = (n % MAX) / SIXTY;
	giay = (n & MAX) % SIXTY;
	cout << "Bay gio la: " << gio << " : " << phut << " : " << giay << endl;
	_getch();
	return 0;
	
}
