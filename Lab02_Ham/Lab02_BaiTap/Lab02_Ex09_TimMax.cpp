 #include <iostream>
 #include <conio.h>

 using namespace std;
 
 double TimMax(double x, double y)
 {
 	return (x > y) ? x : y;
 }
 
 double TimMax4(double a, double b, double c, double d)
 {
 	double max_ab = TimMax(a, b);
 	double max_cd = TimMax(c, d);
 	return TimMax(max_ab, max_cd);
 }
 
 int main()
 {
 	double a, b, c, d;
 	cout << "Nhap 4 so a, b, c, d : "; cin >> a >> b >> c >> d;
 	cout << "So lon nhat trong 4 so a, b, c, d la: " << TimMax4(a, b, c, d) << endl;
 	_getch();
 	return 0;
 }

