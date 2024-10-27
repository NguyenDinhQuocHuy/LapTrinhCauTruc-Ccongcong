#include <bits/stdc++.h>
#include <conio.h>

#define PI	3.14
using namespace std;
int main()
{
	float R, S, V;
	cout << "Nhap ban kinh: "; cin >> R;
	V = (4 / 3) * PI * pow(R, 3);
	S = 4 * PI * pow(R, 2);
	cout << "Dien tich mat cau la: " << S << endl
         << "The tich khoi cau la: " << V << endl;
	
	_getch();
	return 0;
}
