 #include <bits/stdc++.h>
 #include <conio.h>

 #define PI 3.1415926

 using namespace std;
 double TinhDienTichMatCau(float banKinh, float dienTich)
 {
 	dienTich = 4 * PI * pow(banKinh, 2);
 	return dienTich;
 }
 double TinhTheTichKhoiCau(float banKinh, float theTich)
 {
 	theTich = (4 * PI * pow(banKinh, 3)) / 4;
 	return theTich;
 }
 
 int main()
 {
 	float R, S, V;
 	
 	cout <<"Nhap ban kinh : ", cin >> R;
 	
 	S = TinhDienTichMatCau(R, S);
 	V = TinhTheTichKhoiCau (R, V);
 	
 	cout << "Dien tich mat cau la: " << S << endl
 	     << "The tich khoi cau la: " << V << endl;
 	     
 	_getch();
 	return 0;
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
