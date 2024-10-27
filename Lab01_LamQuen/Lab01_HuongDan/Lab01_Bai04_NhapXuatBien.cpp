#include <iostream>
#include <conio.h>
#include <iomanip>
#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int x = 10;
	int y = 100;
	int z = 20;
	  cout << "x = " << x << endl;
	  cout << "y = " << y << endl;
	  cout << "z = " << z << endl;
	  cout << "x + y + z = " << x + y + z << endl;
	  cout << x << " + " << y << " + " << z << " = " << x + y + z << endl;
	int dai , rong;
	  cout << endl << "Nhap chieu dai cua HCN : ";
	  cin >> dai;
	  cout << endl << "Nhap chieu rong cua HCN : ";
	  cin >> rong;
	  cout << endl
	       << "Chieu dai hinh chu nhat la : " << dai << endl
	       << "CHieu rong hinh chu nhat la : " << rong << endl;
	int chuVi, dienTich;
	  chuVi = ( dai + rong ) * 2;
	  dienTich = dai * rong;
	  cout << "Chu vi cua HCN la : " << chuVi << endl;
	  cout << "Dien tich cua HCN la : " << dienTich << endl;
	_getch();
	return 0;
}
