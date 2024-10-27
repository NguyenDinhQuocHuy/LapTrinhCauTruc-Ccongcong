#include <bits/stdc++.h>
#include <conio.h>
#include <math.h>

#define PI	3.14
using namespace std;
int main()
{
	float R, h, P, S, dienTichXQ, dienTichTP, theTich;
	cout << "Nhap ban kinh: "; cin >> R;
	cout << "Nhap chieu cao: "; cin >> h;
	
	P = 2 * PI * R;
	S = PI * R * R;
	dienTichXQ = 2 * PI * R * h;
	dienTichTP = (2 * PI * R * h) + (2 * PI * R * R);
	theTich = PI * R * R * h;
	
	cout << "Chu vi day la: " << P << endl
	     << "Dien tich day la: " << S << endl
	     << "Dien tich xung quanh la: " << dienTichXQ << endl
	     << "Dien tich toan phan la: " << dienTichTP << endl
	     << "The tich la: " << theTich << endl;
	     
	_getch();
	return 0;
}

















