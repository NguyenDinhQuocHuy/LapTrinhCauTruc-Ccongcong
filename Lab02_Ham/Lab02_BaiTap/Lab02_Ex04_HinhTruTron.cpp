 #include <bits/stdc++.h>
 #include <conio.h>

 #define PI 3.1415926

 using namespace std;
 
 double TinhChuViDay(float R)
 {
 	double chuVi;
 	chuVi = 2 * PI * R;
 	return chuVi;
 }
 double TinhDienTichDay(float R)
 { 
    double dienTich;
 	dienTich = PI * pow(R, 2);
 	return dienTich;
 }
 double TinhDienTichXQ(float R, float h)
 {
 	double dienTichXQ;
 	dienTichXQ = 2 * PI * R * h;
 	return dienTichXQ;
 }
 double TinhDienTichTP(float R, float h)
 {
 	double dienTichTP;
 	dienTichTP = (2 * PI * R * h) + (2 * PI * R * R) ;
 	return dienTichTP;
 }
 double TinhTheTich(float R, float h)
 {
 	double theTich;
 	theTich = PI * R * R * h;
 	return theTich;
 }
 
 int main()
 {
 	int R, h;
 	double S, P, SXQ, STP, V; 
 	cout << "Nhap ban kinh: "; cin >> R;
 	cout << "Nhap chieu cao: "; cin >> h;
 	
 	P = TinhChuViDay(R);
 	cout << "Chu vi day la: " << P << endl;
 	
 	S = TinhDienTichDay(R);
 	cout << "Dien tich day la: " << S << endl;
 	
 	SXQ = TinhDienTichXQ (R, h);
 	cout << "Dien tich xung quanh la: " << SXQ << endl;
 	
 	STP = TinhDienTichTP (R, h);
 	cout << "Dien tich toan phan la: " << STP << endl;
 	
 	V = TinhTheTich (R, h);
 	cout << "The tich la: " << V << endl;
 	
 	_getch();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
