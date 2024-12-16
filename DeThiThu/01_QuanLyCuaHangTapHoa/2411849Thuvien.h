#define MAX 100
#define TAB '\t'

struct NgayThang
{
	unsigned int Ngay;
	unsigned int Thang;
	unsigned int Nam;
};

struct HangHoa
{
	string Ma;
	string TenHangHoa;
	string DonViTinh;
	string NuocSanXuat;
	int DonGia;
	NgayThang ThoiGian;
	int SoLuong;
};

typedef HangHoa DSHH[MAX];
typedef string DSTK[MAX];

// Khai bao nguyen mau ham
void Nhap1HangHoa(HangHoa& hh);
void NhapDSHangHoa(DSHH ds, int n);
void XuatTieuDe();
void XuatDKNgang();
void Xuat1HangHoa(HangHoa hh);
void XuatDSHangHoa(DSHH ds, int n);
bool KiemTraTheoNam(DSHH ds, int n, int nam);
void XuatDanhSachTheoNam(DSHH ds, int n, int nam);
void XuatTieuDeGiaTriTheoNam();
void XuatDKNgangGiaTriTheoNam();
void Xuat1MHTheoNam(HangHoa hh);
long long TinhGiaTriHangHoa(HangHoa hh);
void XuatGiaTriTungMatHangTheoNam(DSHH ds, int n, int nam);
void HoanVi(HangHoa& x, HangHoa& y);
void SapTangTheoSL(DSHH ds, int n);
bool KiemTraThangNam(DSHH ds, int n, int thang, int nam);
void XuatDSTheoThangNam(DSHH ds, int n, int thang, int nam);
int KiemTraMaHH(DSHH ds, int n, string maHH);
void CapNhatThongTinHangHoa(HangHoa& hh);
long long TongGTHHTheoNuocSX(DSHH ds, int n, string nuoc);
void TKTongGTHHTheoTungNuoc(DSHH ds, int n);
void TKCach2(DSHH ds, int n);
void Them1HangHoa(DSHH ds, int& n);

// Dinh nghia ham
void Nhap1HangHoa(HangHoa& hh)
{
	do
	{
		cout << endl << "Nhap ma hang hoa: ";
		cin.ignore();
		_flushall();
		getline(cin, hh.Ma);
	} while (hh.Ma.size() > 5);

	cout << endl << "Nhap ten hang hoa: ";
	cin.ignore();
	_flushall();
	getline(cin, hh.TenHangHoa);

	cout << endl << "Nhap don vi tinh: ";
	cin.ignore();
	_flushall();
	getline(cin, hh.DonViTinh);

	cout << endl << "Nhap nuoc san xuat: ";
	cin.ignore();
	_flushall();
	getline(cin, hh.NuocSanXuat);

	do
	{
		cout << endl << "Nhap don gia: "; cin >> hh.DonGia;
	} while (hh.DonGia <= 0);

	cout << endl << "Nhap ngay thang: ";
	int dk = hh.ThoiGian.Ngay < 1 || hh.ThoiGian.Ngay > 31
		|| hh.ThoiGian.Thang < 1 || hh.ThoiGian.Thang > 12 || hh.ThoiGian.Nam < 1;
	do
	{
		cout << endl << "Nhap ngay: "; cin >> hh.ThoiGian.Ngay;
		cout << endl << "Nhap thang: "; cin >> hh.ThoiGian.Thang;
		cout << endl << "Nhap nam: "; cin >> hh.ThoiGian.Nam;
		
		if (dk)
			cout << endl << "Thoi gian khong dung dinh dang, vui long nhap lai !";
	} while (dk);
	
	cout << endl << "Nhap so luong hang hoa: "; cin >> hh.SoLuong;
}

void NhapDSHangHoa(DSHH ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Hang hoa thu " << i + 1 << ":";
		Nhap1HangHoa(ds[i]);
	}

	cout << endl << "Da nhap xong, chon chuc nang 2 de kiem tra danh sach !";
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(7) << "Ma HH"
		<< setw(22) << "Ten HH"
		<< setw(8) << "DVT"
		<< setw(13) << "Nuoc SX"
		<< setw(9) << "Don gia"
		<< setw(12) << "Thoi gian"
		<< setw(3) << "SL"
		<< endl;

}

void XuatDKNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(7) << "======"
		<< setw(22) << "====================="
		<< setw(8) << "======"
		<< setw(13) << "============"
		<< setw(9) << "========"
		<< setw(12) << "==========="
		<< setw(3) << "==="
		<< endl;
}

void Xuat1HangHoa(HangHoa hh)
{
	cout << endl << setiosflags(ios::left)
		<< setw(7) << hh.Ma
		<< setw(22) << hh.TenHangHoa
		<< setw(8) << hh.DonViTinh
		<< setw(13) << hh.NuocSanXuat
		<< setw(9) << hh.DonGia
		<< setw(2) << hh.ThoiGian.Ngay << "/"
		<< setw(2) << hh.ThoiGian.Thang << "/"
		<< setw(6) << hh.ThoiGian.Nam
		<< setw(3) << hh.SoLuong
		<< endl;
}

void XuatDSHangHoa(DSHH ds, int n)
{
	XuatTieuDe();
	XuatDKNgang();
	for (int i = 0; i < n; i++)
		Xuat1HangHoa(ds[i]);
	XuatDKNgang();
}

bool KiemTraTheoNam(DSHH ds, int n, int nam)
{
	for (int i = 0; i < n; i++)
		if (ds[i].ThoiGian.Nam == nam)
			return true;
	return false;
}

void XuatDanhSachTheoNam(DSHH ds, int n, int nam)
{
	XuatTieuDe();
	XuatDKNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].ThoiGian.Nam == nam)
			Xuat1HangHoa(ds[i]);
	XuatDKNgang();
}

void XuatTieuDeGiaTriTheoNam()
{
	cout << endl << setiosflags(ios::left)
		<< setw(22) << "Ten hang hoa"
		<< setw(11) << "Gia tri"
		<< endl;
}

void XuatDKNgangGiaTriTheoNam()
{
	cout << endl << setiosflags(ios::left)
		<< setw(22) << "====================="
		<< setw(11) << "=========="
		<< endl;
}

long long TinhGiaTriHangHoa(HangHoa hh)
{
	return hh.DonGia * hh.SoLuong;
}

void Xuat1MHTheoNam(HangHoa hh)
{
	cout << endl << setiosflags(ios::left)
		<< setw(22) << hh.TenHangHoa
		<< setw(11) << TinhGiaTriHangHoa(hh)
		<< endl;
}

void XuatGiaTriTungMatHangTheoNam(DSHH ds, int n, int nam)
{
	XuatTieuDeGiaTriTheoNam();
	XuatDKNgangGiaTriTheoNam();
	for (int i = 0; i < n; i++)
		if (ds[i].ThoiGian.Nam == nam)
			Xuat1MHTheoNam(ds[i]);
	XuatDKNgangGiaTriTheoNam();
}

void HoanVi(HangHoa& x, HangHoa& y)
{
	HangHoa tam;
	tam = x;
	x = y;
	y = x;
}

void SapTangTheoSL(DSHH ds, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			bool dk = (ds[i].SoLuong > ds[j].SoLuong) 
				|| (ds[i].SoLuong == ds[j].SoLuong && ds[i].TenHangHoa.compare(ds[j].TenHangHoa) > 0);
			if (dk)
				HoanVi(ds[i], ds[j]);
		}
	XuatDSHangHoa(ds, n);
}

bool KiemTraThangNam(DSHH ds, int n, int thang, int nam)
{
	for (int i = 0; i < n; i++)
		if (ds[i].ThoiGian.Thang == thang && ds[i].ThoiGian.Nam)
			return true;
	return false;
}

void XuatDSTheoThangNam(DSHH ds, int n, int thang, int nam)
{
	XuatTieuDe();
	XuatDKNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].ThoiGian.Thang == thang && ds[i].ThoiGian.Nam == nam)
			Xuat1HangHoa(ds[i]);
	XuatDKNgang();
}

int KiemTraMaHH(DSHH ds, int n, string maHH)
{
	for (int i = 0; i < n; i++)
		if (ds[i].Ma.compare(maHH) == 0)
			return i;
	return -1;
}

void CapNhatThongTinHangHoa(HangHoa& hh)
{
	char traLoi;
	cout << endl << "Ban co muon doi ma hang hoa (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
		do
		{
			cout << endl << "Nhap ma hang hoa: ";
			cin.ignore();
			_flushall();
			getline(cin, hh.Ma);
		} while (hh.Ma.size() > 5);

	cout << endl << "Ban co muon doi ten hang hoa (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
	{
		cout << endl << "Nhap ten hang hoa: ";
		cin.ignore();
		_flushall();
		getline(cin, hh.TenHangHoa);
	}

	cout << endl << "Ban co muon doi don vi tinh (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
	{
		cout << endl << "Nhap don vi tinh: ";
		cin.ignore();
		_flushall();
		getline(cin, hh.DonViTinh);
	}
	
	cout << endl << "Ban co muon doi nuoc san xuat (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
	{
		cout << endl << "Nhap nuoc san xuat: ";
		cin.ignore();
		_flushall();
		getline(cin, hh.NuocSanXuat);
	}
	
	cout << endl << "Ban co muon doi don gia (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
		do
		{
			cout << endl << "Nhap don gia: "; cin >> hh.DonGia;
		} while (hh.DonGia <= 0);
	
	cout << endl << "Ban co muon doi ngay thang (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
	{
		cout << endl << "Nhap ngay thang: ";
		int dk = hh.ThoiGian.Ngay < 1 || hh.ThoiGian.Ngay > 31
			|| hh.ThoiGian.Thang < 1 || hh.ThoiGian.Ngay > 12 || hh.ThoiGian.Ngay < 1;
		do
		{
			cout << endl << "Nhap ngay: "; cin >> hh.ThoiGian.Ngay;
			cout << endl << "Nhap thang: "; cin >> hh.ThoiGian.Thang;
			cout << endl << "Nhap nam: "; cin >> hh.ThoiGian.Nam;

			if (dk)
				cout << endl << "Thoi gian khong dung dinh dang, vui long nhap lai !";
		} while (dk);
	}
	
	cout << endl << "Ban co muon doi so luong hang hoa (Y/N) ?";
	traLoi = _getch();
	if (traLoi == 'Y' || traLoi == 'y')
	{
		cout << endl << "Nhap so luong hang hoa: "; 
		cin >> hh.SoLuong;
	}	
}

long long TongGTHHTheoNuocSX(DSHH ds, int n, string nuoc)
{
	long long tong = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].NuocSanXuat.compare(nuoc) == 0)
			tong += TinhGiaTriHangHoa(ds[i]);
	return tong;
}

void TKTongGTHHTheoTungNuoc(DSHH ds, int n)
{
	cout << endl << "Nuoc san xuat" << "  " << "Tong gia tri";
	cout << endl << "Viet Nam     " << "  " << TongGTHHTheoNuocSX(ds, n, "Viet Nam");
	cout << endl << "Thai Lan     " << "  " << TongGTHHTheoNuocSX(ds, n, "Thai Lan");
	cout << endl << "Indonesia    " << "  " << TongGTHHTheoNuocSX(ds, n, "Indonesia");
	cout << endl << "Trung Quoc   " << "  " << TongGTHHTheoNuocSX(ds, n, "Trung Quoc");
}

void TKCach2(DSHH ds, int n)
{
	long long tongGT = 0;
	DSTK a;
	int soPT = 0;

	// Xuat tieu de, dong ke ngang
	cout << endl << setiosflags(ios::left) << setw(15) << "Nuoc san xuat" << setw(12) << "Tong gia tri";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		bool daTK = false;
		for (int j = 0; j < soPT; j++)
			if (ds[i].NuocSanXuat.compare(a[j]) == 0)
				daTK = true;

		if (daTK == false)
		{
			tongGT = TongGTHHTheoNuocSX(ds, n, ds[i].NuocSanXuat);
			cout << endl << setiosflags(ios::left) << setw(15) << ds[i].NuocSanXuat << setw(12) << tongGT;
			a[soPT] = ds[i].NuocSanXuat;
			soPT++;
		}
	}
}

void Them1HangHoa(DSHH ds, int& n)
{
	string maHH;
	HangHoa hh;
	cout << endl << "Nhap ma hang hoa: ";
	cin.ignore();
	_flushall();
	getline(cin, maHH);

	if (KiemTraMaHH(ds, n, maHH) != -1)
		cout << endl << "Ma hang hoa da bi trung, vui long nhap lai !";
	else
		Nhap1HangHoa(hh);
	ds[n] = hh;
	n++;
}
