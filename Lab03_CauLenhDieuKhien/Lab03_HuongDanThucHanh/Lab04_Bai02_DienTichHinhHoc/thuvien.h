
#define PI 3.1415936

// Khai bao nguyen mau cac ham xu ly
double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double dai, double rong);
double DienTichTamGiac(double a, double b, double c);
double DienTichHinhTron(double banKinh);
// Dinh nghia ham

// Tinh dien tich hinh vuong
double DienTichHinhVuong(double canh)
{
	return canh * canh;
}

// Tinh dien tich hinh chu nhat
double DienTichHinhChuNhat(double dai, double rong)
{
	return dai * rong;
}

// Dien tich tam giac
double DienTichTamGiac(double a, double b, double c)
{
	double p = (double)(a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Dien tich hinh tron
double DienTichHinhTron(double banKinh)
{
	return PI * banKinh * banKinh;
}




