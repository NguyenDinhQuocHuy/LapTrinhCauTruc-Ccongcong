#include <iostream>
#include <math.h>
#include <conio.h>
#define TAB '\t'

using namespace std;

// 5. Chỉ số cơ thể:

double TinhChiSoBMI(double khoiLuong, double chieuCao);

int main()
{
	double w, h, BMI;
	cout << endl << "nhap khoi luong (kg): "; cin >> w;
	cout << endl << "nhap chieu cao (m): "; cin >> h;
	BMI = TinhChiSoBMI(w, h);
	if (BMI < 15)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", doi khat";
	}
	else if (BMI < 17.5)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", bieng an";
	}
	else if (BMI < 18.5)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", thieu can";
	}
	else if (BMI >= 18.5 && BMI < 25)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", ly tuong";
	}
	else if (BMI >= 25 && BMI < 30)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", thua can";
	}
	else if (BMI >= 30 && BMI < 40)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", beo phi";
	}
	else if (BMI >= 40)
	{
		cout << endl << "Chi so BMI la: " << BMI << ", tre em beo phi";
	}
	_getch();
	return 1;
}
double TinhChiSoBMI(double khoiLuong, double chieuCao)
{
	double BMI;
	BMI = khoiLuong / pow(chieuCao, 2);
	return BMI;
}