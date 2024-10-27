 #include <bits/stdc++.h>
 #include <conio.h>
 #include <math.h>
 
 #define PI 3.1415926
 #define MAX    3600
 #define SIXTY  60
 
 using namespace std;
 
 // Bai 1: Hinh tron
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
 
 // Bai 2: Doi Gio Phut Giay
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
	 
  // Bai 3: Tinh Dien Tich
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

  // Bai 4: Hinh Tru Tron
  double TinhChuViDay(float R)
 {
 	double chuVi;
 	chuVi = 2 * PI * R;
 	return chuVi;
 }
 double TinhDienTichDay(float R)
 { 
    double dienTich;
 	dienTich = PI * pow(R, 2);
 	return dienTich;
 }
 double TinhDienTichXQ(float R, float h)
 {
 	double dienTichXQ;
 	dienTichXQ = 2 * PI * R * h;
 	return dienTichXQ;
 }
 double TinhDienTichTP(float R, float h)
 {
 	double dienTichTP;
 	dienTichTP = (2 * PI * R * h) + (2 * PI * R * R) ;
 	return dienTichTP;
 }
 double TinhTheTich(float R, float h)
 {
 	double theTich;
 	theTich = PI * R * R * h;
 	return theTich;
 }
  
  // Bai 5: Hinh Cau:
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
  
  // Bai 6: Chi so co the
  double TinhChiSoBMI(double khoiLuong, double chieuCao)
 {
    double BMI;
    BMI = khoiLuong / pow(chieuCao, 2);
    return BMI;
 }
 
 // Bai 7: Khoang cach
  
 float TinhKhoangCach(float xA, float xB, float yA, float yB)
 {
 	double khoangCach;
 	khoangCach = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
 	return khoangCach;
 }
 	
  // Bai 8: Do lanh cua gio Windchill
  double WindChill(double nhietDo, double vanToc)
 {
 	double windChill;
 	windChill = 35.74 + 0.6215 * nhietDo + (0.4275 * nhietDo - 35.75) * pow(vanToc, 0.16);
 	return windChill;
 }
 
 // Bai 9: So sanh
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
 
 // Bai 10: Chuyen doi he toa do
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
    // Bai 1:
    float r, chuVi, dienTich;
 	cout << "Nhap ban kinh: " << r; cin >> r;
 	
 	chuVi = TinhChuViHinhTron(r);
 	dienTich = TinhDienTichHinhTron(r);
 	
 	cout << "Chu vi hinh tron la: " << chuVi << endl;
 	cout << "Dien tich hinh tron la: " << dienTich << endl;
 	
 	// Bai 2: 
 	int soGiay;
 	int gio, phut, giay;
 	cout << "Nhap so giay: "; cin >> soGiay;
 	
 	gio = DoiGio(soGiay, gio);
 	phut = DoiPhut(soGiay, phut);
 	giay = DoiGiay(soGiay, giay);
 	
 	cout << gio << " : " << phut << " : " << giay << endl;
 	
 	// Bai 3:
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
 	     
 	// Bai 4:
 	int R, h;
 	double S, P, SXQ, STP, V; 
 	cout << "Nhap ban kinh: "; cin >> R;
 	cout << "Nhap chieu cao: "; cin >> h;
 	
 	P = TinhChuViDay(R);
 	cout << "Chu vi day la: " << P << endl;
 	
 	S = TinhDienTichDay(R);
 	cout << "Dien tich day la: " << S << endl;
 	
 	SXQ = TinhDienTichXQ (R, h);
 	cout << "Dien tich xung quanh la: " << SXQ << endl;
 	
 	STP = TinhDienTichTP (R, h);
 	cout << "Dien tich toan phan la: " << STP << endl;
 	
 	V = TinhTheTich (R, h);
 	cout << "The tich la: " << V << endl;
 	
 	// Bai 5:
 	float R, S, V;
 	
 	cout <<"Nhap ban kinh : ", cin >> R;
 	
 	S = TinhDienTichMatCau(R, S);
 	V = TinhTheTichKhoiCau (R, V);
 	
 	cout << "Dien tich mat cau la: " << S << endl
 	     << "The tich khoi cau la: " << V << endl;
 	     
 	// Bai 6:
 	double w, h, cs;
 	cout << "Nhap khoi luong: ";
 	cin >> w;
 	cout << "Nhap chieu cao: ";
 	cin >> h;
 	cs = TinhChiSoBMI(w, h);
 	cout << cs;
 	
 	// Bai 7:
 	float xa, xb, ya, yb;
 	double d;
 	cout << "Nhap toa do cua diem A: "; cin >> xa >> ya;
 	cout << "Diem A (" << xa << "," << ya << ")" << endl;
 	cout << "Nhap toa do cua diem B: "; cin >> xb >> yb;
 	cout << "Diem B (" << xb << "," << yb << ")" << endl;
 	d = TinhKhoangCach(xa, xb, ya, yb);
 	cout << "Khoang cach giua 2 diem A va B la: " << d << endl;
 	
 	// Bai 8:
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
 	
 	// Bai 9:
 	double a, b, c, d;
 	cout << "Nhap 4 so a, b, c, d : "; cin >> a >> b >> c >> d;
 	cout << "So lon nhat trong 4 so a, b, c, d la: " << TimMax4(a, b, c, d) << endl;
 	
 	// Bai 10:
 		double phi, delta, h, Altitude, Azimuth;
 	
 	cout << "Nhap vi do: "; cin >> phi;
    cout << "Nhap xich vi do: ";  cin >> delta;
    cout << "Nhap goc cua mui gio: "; cin >> h;
    
 	Altitude = TinhDoCao(phi, delta, h);
 	Azimuth = TinhPhuongVi(phi, delta, h);
 	
 	cout << endl << "Vi tri cua ngoi sao la: " << endl;
 	cout << "Do cao: " << Altitude << endl;
 	cout << "Phuong vi: " << Azimuth << endl;
 	
 	
*/
 	_getch();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
