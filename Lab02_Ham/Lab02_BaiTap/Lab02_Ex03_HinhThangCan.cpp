 #include <bits/stdc++.h>
 #include <conio.h>
 #include <math.h>
 
 using namespace std;

 double TinhCanhBen(int dayLon, int dayBe, int chieuCao)
 {
	double canhBen;
	canhBen = sqrt(pow((dayLon - dayBe) / 2, 2) + pow(chieuCao, 2));
	return canhBen;
 }
 
 double TinhChuVi(int dayLon, int dayBe, double canhBen)
 {
	double chuVi;
	chuVi = dayLon + dayBe + 2 * canhBen;
	return chuVi;
 }
 
 double TinhDienTich(int dayLon, int dayBe, int chieuCao)
 {
 	double dienTich;
 	dienTich = (((dayLon + dayBe) * chieuCao) / 2);
 	return dienTich;
 }
 
 int main()
 {
 	int a, b, h;
 	float canhBen, chuVi, dienTich;
 	cout << "Nhap a: "; cin >> a;
 	cout << "Nhap b: "; cin >> b;
 	cout << "Nhap h: "; cin >> h;
 	
 	canhBen = TinhCanhBen(a, b, h);
 	chuVi = TinhChuVi(a, b, canhBen);
 	dienTich = TinhDienTich (a, b, h);
 	
 	cout << canhBen << endl
 	     << chuVi << endl
 	     << dienTich << endl;
 	_getch();
 	return 0;
 	
 }
 
















