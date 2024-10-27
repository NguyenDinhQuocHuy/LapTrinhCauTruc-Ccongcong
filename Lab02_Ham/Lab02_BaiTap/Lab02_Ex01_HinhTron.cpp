 #include <bits/stdc++.h>
 #include <conio.h>
 #include <math.h>
 
 #define PI 3.1415926

 using namespace std;

 double TinhChuViHinhTron(double r)
 {
 	float p;
 	p = 2 * PI * r;
 	return p;
 }
 double TinhDienTichHinhTron(double r)
 {
 	float S;
 	S = PI * pow(r, 2);
 	return S;
 }
 

 int main()
 {
 	float r, chuVi, dienTich;
 	cout << "Nhap ban kinh: " << r; cin >> r;
 	
 	chuVi = TinhChuViHinhTron(r);
 	dienTich = TinhDienTichHinhTron(r);
 	
 	cout << "Chu vi hinh tron la: " << chuVi << endl;
 	cout << "Dien tich hinh tron la: " << dienTich << endl;
 	
 	_getch();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
