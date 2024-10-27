 #include <bits/stdc++.h>
 #include <conio.h>
 #include <math.h>

 using namespace std;
 
 // Dinh nghia ham
 int TinhDienTichHCN(int dai, int rong)
 {
 	int dt;
 	dt = dai * rong;
 	return dt;
 }
 double TinhDienTichTamGiac(int canhA, int canhB, int canhC)
 {
 	double dt, p;
 	p = (canhA + canhB + canhC) / 2.0;
 	dt = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
 	return dt;
 }
 
 // Khai bao nguyen mau cua cac ham
 int TinhDienTichHCN(int dai, int rong);
 double TinhDienTichTamGiac(int canhA, int canhB, int canhC);
 
 // Ham MAIN
 int main()
 {
 	int a,b,c;
 	double dienTich;
 	cout << endl << "Nhap do dai canh a: ";
 	cin >> a;
 	cout << endl << "Nhap do dai canh b: ";
 	cin >> b;
 	cout << endl << "Nhap do dai canh c: ";
 	cin >> c;
 	
 	dienTich = TinhDienTichHCN(a, b);
 	cout << endl << "Dien tich cua hinh chu nhat co chieu dai " << a << " va chieu rong " << b << " la "  << dienTich;
 	
 	dienTich = TinhDienTichTamGiac(a, b, c);
 	cout << endl << "Dien tich cua hinh tam giac co 3 canh: a = " << a << ", b = " << b << ", c = " << c << " la " << dienTich;
 	
 	_getch();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
