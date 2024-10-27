#include <bits/stdc++.h>
#include <conio.h>
#include <math.h>

 using namespace std;
 
 float TinhKhoangCach(float xA, float xB, float yA, float yB)
 {
 	double khoangCach;
 	khoangCach = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
 	return khoangCach;
 }
 
 int main()
 {
 	float xa, xb, ya, yb;
 	double d;
 	cout << "Nhap toa do cua diem A: "; cin >> xa >> ya;
 	cout << "Diem A (" << xa << "," << ya << ")" << endl;
 	cout << "Nhap toa do cua diem B: "; cin >> xb >> yb;
 	cout << "Diem B (" << xb << "," << yb << ")" << endl;
 	d = TinhKhoangCach(xa, xb, ya, yb);
 	cout << "Khoang cach giua 2 diem A va B la: " << d << endl;
 	return 0;
 }
 
  
