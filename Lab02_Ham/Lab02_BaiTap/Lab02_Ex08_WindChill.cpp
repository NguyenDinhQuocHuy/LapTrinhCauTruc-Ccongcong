 #include <bits/stdc++.h>
 #include <conio.h>
 #include <math.h>
 
 using namespace std;
 
 double WindChill(double nhietDo, double vanToc)
 {
 	double windChill;
 	windChill = 35.74 + 0.6215 * nhietDo + (0.4275 * nhietDo - 35.75) * pow(vanToc, 0.16);
 	return windChill;
 }
 
 int main()
 {
 	double t, v, w;
 	cout << "Nhap nhiet do: "; cin >> t;
 	cout << "Nhap van toc gio: "; cin >> v;
 
 	w = WindChill(t, v);
 	if (t >= -50 && t <= 50 && v >= 30 && v <= 120)
 	{
	   cout << "Do lanh cua gio la: " << w << endl;
 	}
 	else 
	 {
 		cout << "Du lieu khong hop le ! " << endl;
	 }
 	_getch();
 	return 0;
 }
