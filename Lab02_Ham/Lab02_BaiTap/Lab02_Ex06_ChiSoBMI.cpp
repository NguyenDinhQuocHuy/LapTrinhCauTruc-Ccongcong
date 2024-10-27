 #include <bits/stdc++.h>
 #include <iostream>
 #include <conio.h>
 
 using namespace std;
 
 double TinhChiSoBMI(double khoiLuong, double chieuCao)
 {
    double BMI;
    BMI = khoiLuong / pow(chieuCao, 2);
    return BMI;
 }
 
 int main()
 {
 	double w, h, cs;
 	cout << "Nhap khoi luong: ";
 	cin >> w;
 	cout << "Nhap chieu cao: ";
 	cin >> h;
 	cs = TinhChiSoBMI(w, h);
 	cout << cs;
 	return 0;
 }

 
