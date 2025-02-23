#define MAX 1000
#define TAB '\t'

struct MatHang
{
	string MaMH;
	string TenMH;
	int SoLuong;
	double DonGia;
	string LoaiMH;
};

typedef MatHang DSMH[MAX];

// Khai bao nguyen mau ham
void Nhap1MatHang(MatHang& mh);
void NhapDSMatHang(DSMH ds, int n);
void XuatTieuDe();
void XuatDongKeNgang();
void Xuat1MatHang(MatHang mh);
void XuatDSMatHang(DSMH ds, int n);
double TongGiaTien(DSMH ds, int n);
int KiemTraMaMH(DSMH ds, int n, string maMH);
int ViTriMHTheoMaMH(DSMH ds, int n, string maMH);
void HoanVi(MatHang& x, MatHang& y);
void SapTangTheoSoLuong(DSMH ds, int n);
int KiemTraSoLuong(DSMH ds, int n, int soLuong);
void XoaMHCoSLX(DSMH ds, int n, int soLuong);
int KiemTraMH(DSMH ds, int n, string x);
int TongSLTheoTungLoai(DSMH ds, int n, string loai);
void ChenMatHang(DSMH ds, int& n, string x);
void ThongKeSLTheoTungLoai(DSMH ds, int n);
int TimMaxSL(DSMH ds, int n);
void XuatMHSLNhieuNhat(DSMH ds, int n);

// Dinh nghia ham 
void Nhap1MatHang(MatHang& mh)
{
	cout << endl << "Nhap ma mat hang: ";
	cin.ignore();
	_flushall();
	getline(cin, mh.MaMH);

	cout << endl << "Nhap ten mat hang: ";
	cin.ignore();
	_flushall();
	getline(cin, mh.TenMH);

	cout << endl << "Nhap so luong: "; cin >> mh.SoLuong;

	cout << endl << "Nhap don gia: "; cin >> mh.DonGia;

	cout << endl << "Nhap loai mat hang: ";
	cin.ignore();
	_flushall();
	getline(cin, mh.LoaiMH);
}

void NhapDSMatHang(DSMH ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Mat hang thu " << i + 1 << ": ";
		Nhap1MatHang(ds[i]);
	}
	cout << endl << "Da nhap xong !";
}

void XuatTieuDe()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(12) << "Ma mat hang"
		<< setw(24) << "Ten mat hang"
		<< setw(4) << "SL"
		<< setw(9) << "Don gia"
		<< setw(8) << "Loai MH"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(12) << "==========="
		<< setw(24) << "======================="
		<< setw(4) << "==="
		<< setw(9) << "========"
		<< setw(8) << "======="
		<< endl;
}

void Xuat1MatHang(MatHang mh)
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(12) << mh.MaMH
		<< setw(24) << mh.TenMH
		<< setw(4) << mh.SoLuong
		<< setw(9) << mh.DonGia
		<< setw(8) << mh.LoaiMH
		<< endl;
}

void XuatDSMatHang(DSMH ds, int n)
{
	cout << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		Xuat1MatHang(ds[i]);
	XuatDongKeNgang();
}

double TongGiaTien(DSMH ds, int n)
{
	float tong = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].SoLuong < 10)
			tong += double (ds[i].DonGia * ds[i].SoLuong);
	return tong;
}

int KiemTraMaMH(DSMH ds, int n, string maMH)
{
	for (int i = 0; i < n; i++)
		if (ds[i].MaMH.compare(maMH) == 0)
			return 1;
	return -1;
}

int ViTriMHTheoMaMH(DSMH ds, int n, string maMH)
{
	int vt = -1;
	for (int i = 0; i < n; i++)
	{
		if (maMH.compare(ds[i].MaMH) == 0)
			vt = i;
		return vt;
	}
}

void HoanVi(MatHang& x, MatHang& y)
{
	MatHang tam;
	tam = x;
	x = y;
	y = tam;
}

void SapTangTheoSoLuong(DSMH ds, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			bool dk = (ds[i].SoLuong > ds[j].SoLuong)
				|| (ds[i].SoLuong == ds[j].SoLuong && ds[i].TenMH.compare(ds[j].TenMH) == 1);
			if (dk == true)
				HoanVi(ds[i], ds[j]);
		}
	XuatDSMatHang(ds, n);
}

int KiemTraSoLuong(DSMH ds, int n, int soLuong)
{
	for (int i = 0; i < n; i++)
		if (ds[i].SoLuong == soLuong)
			return 1;
	return -1;
}

void XoaMHCoSLX(DSMH ds, int n, int soLuong)
{
	for (int i = 0; i < n; i++)
		if (ds[i].SoLuong == soLuong)
			ds[i] = ds[i + 1];
	n--;
	XuatDSMatHang(ds, n);
}

int KiemTraMH(DSMH ds, int n, string x)
{
	for (int i = 0; i < n; i++)
		if (ds[i].MaMH.compare(x) == 0)
			return 1;
	return -1;
}

void ChenMatHang(DSMH ds, int& n, string x)
{
	int vt = ViTriMHTheoMaMH(ds, n, x);
	if (vt != -1)
	{
		n++;
		for (int i = n; i > vt + 1; i--)
		{
			ds[i] = ds[i - 1];
		}
		ds[vt + 1] = MatHang();
		Nhap1MatHang(ds[vt + 1]);
	}
	XuatDSMatHang(ds, n);
}

int TongSLTheoTungLoai(DSMH ds, int n, string loai)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].LoaiMH.compare(loai) == 0)
			dem++;
	return dem;
}

void ThongKeSLTheoTungLoai(DSMH ds, int n)
{
	cout << endl << "Loai  So luong";
	cout << endl << "====  ========";
	cout << endl << "Sua   " << TongSLTheoTungLoai(ds, n, "Sua");
	cout << endl << "Banh  " << TongSLTheoTungLoai(ds, n, "Banh");
	cout << endl << "Nuoc  " << TongSLTheoTungLoai(ds, n, "Nuoc");
	cout << endl << "====  ========";
}

int TimMaxSL(DSMH ds, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].SoLuong > max)
			max = ds[i].SoLuong;
	return max;
}

void XuatMHSLNhieuNhat(DSMH ds, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (TimMaxSL(ds, n) <=  ds[i].SoLuong)
			Xuat1MatHang(ds[i]);
	XuatDongKeNgang();
}

