#define MAX 100
#define TAB '\t'

struct NgayThang
{
	unsigned short Ngay;
	unsigned short Thang;
	unsigned short Nam;
};

struct NhanVien
{
	unsigned int MaSo;
	char HoTen[MAX];
	char DiaChi[MAX];
	NgayThang NgaySinh;
	float HeSoLuong;
};

typedef	NhanVien MangNV[MAX];

// Khai bao nguyen mau cac ham xu ly
void XuatTieuDe();
void XuatDongKeNgang();
void XuatMotNV(NhanVien nv);
void XuatDanhSachNV(MangNV a, int n);
void NhapMotNV(NhanVien& nv);
void NhapDSNV(MangNV a, int n);
int KiemTraMaNV(MangNV a, int n, int maSo);
void ThemMotNV(MangNV a, int& n);

// Dinh nghia cac ham xu ly
void XuatTieuDe()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(6) << "Ma so"
		<< setw(25) << "Ho va ten"
		<< setw(25) << "Dia chi"
		<< setw(15) << "Ngay sinh"
		<< setw(8) << "HS Luong"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << setiosflags(ios::left)
		<< setw(6) << "====="
		<< setw(25) << "========================="
		<< setw(25) << "========================"
		<< setw(15) << "=============="
		<< setw(8) << "========"
		<< endl;
}

void XuatMotNV(NhanVien nv)
{
	cout << setiosflags(ios::left)
		<< setw(6) << nv.MaSo
		<< setw(25) << nv.HoTen
		<< setw(25) << nv.DiaChi
		<< setw(2) << nv.NgaySinh.Ngay << "/ "
		<< setw(2) << nv.NgaySinh.Thang << "/ "
		<< setw(7) << nv.NgaySinh.Nam
		<< setw(8) << nv.HeSoLuong
		<< endl;
}

void XuatDanhSachNV(MangNV a, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();

	for (int i = 0; i < n; i++)
		XuatMotNV(a[i]);
	XuatDongKeNgang();
	cout << endl;
}

void NhapMotNV(NhanVien& nv)
{
	cout << "Nhap ma so nhan vien: ";
	cin >> nv.MaSo;

	cout << "Nhap ho va ten: ";
	cin.ignore(1);
	gets_s(nv.HoTen);

	cout << "Nhap dia chi: ";
	gets_s(nv.DiaChi);

	cout << "Nhap ngay sinh (thu tu ngay thang nam): ";
	cin >> nv.NgaySinh.Ngay
		>> nv.NgaySinh.Thang
		>> nv.NgaySinh.Nam;

	cout << "Nhap he so luong: ";
	cin >> nv.HeSoLuong;
}

void NhapDSNV(MangNV a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhan vien thu " << i + 1 << ": " << endl;
		NhapMotNV(a[i]);
	}
	cout << endl << "Da nhap xong !" << endl;
}

int KiemTraMaNV(MangNV a, int n, int maSo)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaSo == maSo)
			return 1;
	return 0;
}

void ThemMotNV(MangNV a, int& n)
{
	NhanVien nv;
	NhapMotNV(nv);
	while (KiemTraMaNV(a, n, nv.MaSo))
	{
		cout << endl << "Ma so " << nv.MaSo << " da bi trung, nhap lai ma khac: ";
		cin >> nv.MaSo;
	}
	a[n] = nv;
	n++;
}
