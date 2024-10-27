 #include <iostream>
 #include <conio.h>
 #include <math.h>
 
 using namespace std;
 
 double TinhDoCao(double viDo, double xichViDo, double gocMuiGio )
 {
 	double doCao;
 	doCao = asin(sin(viDo) * sin(xichViDo) + cos(viDo) * cos(xichViDo) * cos(gocMuiGio) );
 	return doCao;
 }
 
 double TinhPhuongVi(double viDo, double xichViDo, double gocMuiGio)
 {
 	double doCao, phuongVi;
 	doCao = TinhDoCao(viDo, xichViDo, gocMuiGio);
 	phuongVi = acos((cos(viDo) * sin(xichViDo) - sin(viDo) * cos(xichViDo) * cos(gocMuiGio)) / cos(doCao));
 	return phuongVi;
 }
 
 int main()
 {
 	double phi, delta, h, Altitude, Azimuth;
 	
 	cout << "Nhap vi do: "; cin >> phi;
    cout << "Nhap xich vi do: ";  cin >> delta;
    cout << "Nhap goc cua mui gio: "; cin >> h;
    
 	Altitude = TinhDoCao(phi, delta, h);
 	Azimuth = TinhPhuongVi(phi, delta, h);
 	
 	cout << endl << "Vi tri cua ngoi sao la: " << endl;
 	cout << "Do cao: " << Altitude << endl;
 	cout << "Phuong vi: " << Azimuth << endl;
 	
 	_getch();
 	return 0;
 }
 
 
 
 
 


