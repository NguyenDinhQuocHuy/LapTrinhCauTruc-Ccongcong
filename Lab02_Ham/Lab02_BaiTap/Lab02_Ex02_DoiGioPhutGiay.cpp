 #include <bits/stdc++.h>
 #include <conio.h>
 #include <math.h>
 #define MAX    3600
 #define SIXTY  60
 
 using namespace std;
 
 int DoiGio(unsigned int n, int hours)
 {
 	hours = n / MAX;
 	return hours;
 }
 int DoiPhut(unsigned int n, int minutes)
 {
 	minutes = (n % MAX) / SIXTY;
 	return minutes;
 }
 int DoiGiay(unsigned int n, int seconds)
 {
	 seconds = (n % MAX) % SIXTY;
	 return seconds;
 	
 }
 
 int main()
 {
 	int soGiay;
 	int gio, phut, giay;
 	cout << "Nhap so giay: "; cin >> soGiay;
 	
 	gio = DoiGio(soGiay, gio);
 	phut = DoiPhut(soGiay, phut);
 	giay = DoiGiay(soGiay, giay);
 	
 	cout << gio << " : " << phut << " : " << giay << endl;
 	_getch();
 	return 0;
 	
 }


