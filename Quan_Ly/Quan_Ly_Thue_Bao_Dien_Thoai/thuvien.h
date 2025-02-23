#define TAB '\t'
#define MAX 1000

struct NgayThang
{
	unsigned int Ngay;
	unsigned int Thang;
	unsigned int Nam;
};

struct SoDienThoai
{
	string MaVung;
	string SoDT;
};

struct ThueBao
{
	string MaSoThueBao;
	string HoTen;
	string DiaChi;
	SoDienThoai SoDT;
	NgayThang NgayHopDong;
};


typedef ThueBao DSTB[MAX];

// Khai bao nguyen mau
void Nhap1ThueBao(ThueBao& tb);
void NhapDSThueBao(DSTB ds, int n);
void XuatTieuDe();
void XuatDongKeNgang();
void Xuat1ThueBao(ThueBao tb);
void XuatDSThueBao(DSTB ds, int n);
bool KiemTraHoTen(DSTB ds, int n, string hoTen);
bool KiemTraMaVung(DSTB ds, int n, string maVung);
bool KiemTraSoDienThoai(DSTB ds, int n, string soDienThoai);
void TimThongTinTBTheoSoDTCoMaVung(DSTB ds, int n, string maVung, string soDienThoai);
void TimThongTinTBTheoSoDTKoCoMaVung(DSTB ds, int n, string maVung, string soDienThoai);
void TimSDTKhiBietHoTen(DSTB ds, int n, string hoTen);
void TimDiaChiTheoSoDTCoMaVung(DSTB ds, int n, string maVung, string soDienThoai);
void XuatDSTBTheoMaVung(DSTB ds, int n, string maVung);
void HoanVi(ThueBao& x, ThueBao& y);
void XuatThongTinTBDKSomNhat(DSTB ds, int n);
void XuatDSTBCoTenTrung(DSTB ds, int n, string ten);
void XuatTBCoDiaChiNamTrenDuong(DSTB ds, int n, string tenDuong);
void SapXepTangDan(DSTB ds, int n);

// Dinh nghia ham 
void Nhap1ThueBao(ThueBao& tb)
{
	cout << endl << "- Nhap ma so thue bao : ";
	cin.ignore();
	_flushall();
	getline(cin, tb.MaSoThueBao);


	cout << endl << "- Nhap ho ten: ";
	_flushall();
	getline(cin, tb.HoTen);

	cout << endl << "- Nhap dia chi khach hang : ";
	_flushall();
	getline(cin, tb.DiaChi);

	cout << endl << "- Nhap so dien thoai: ";
	cout << endl << "+ Nhap ma vung: ";
	_flushall();
	getline(cin, tb.SoDT.MaVung);
	cout << "+ Nhap so dien thoai: ";
	_flushall();
	getline(cin, tb.SoDT.SoDT);

	cout << endl << "- Nhap ngay hop dong: ";
	cin >> tb.NgayHopDong.Ngay >> tb.NgayHopDong.Thang >> tb.NgayHopDong.Nam;
}

void NhapDSThueBao(DSTB ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << i + 1 << "." << " Thue bao thu " << i + 1 << ": ";
		Nhap1ThueBao(ds[i]);
	}
	cout << endl << "Da nhap xong !";
	cout << endl << "Vui long chon chuc nang 2 de kiem tra !";
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(9) << "Ma so TB"
		<< setw(31) << "Ho va ten"
		<< setw(30) << "Dia chi"
		<< setw(20) << "So dien thoai"
		<< setw(15) << "Ngay hop dong"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(9) << "========"
		<< setw(31) << "=============================="
		<< setw(30) << "============================="
		<< setw(20) << "==================="
		<< setw(15) << "=============="
		<< endl;
}

void Xuat1ThueBao(ThueBao tb)
{
	cout << endl << setiosflags(ios::left)
		<< setw(9) << tb.MaSoThueBao
		<< setw(31) << tb.HoTen
		<< setw(30) << tb.DiaChi
		<< setw(2) << "0." 
		<< setw(2) << tb.SoDT.MaVung 
		<< setw(1) << "." 
		<< setw(15)<< tb.SoDT.SoDT
		<< setw(2) << tb.NgayHopDong.Ngay << "/ " 
		<< setw(2) << tb.NgayHopDong.Thang << "/ " 
		<< setw(7) << tb.NgayHopDong.Nam
		<< endl;
}

void XuatDSThueBao(DSTB ds, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		Xuat1ThueBao(ds[i]);
	XuatDongKeNgang();
}

bool KiemTraHoTen(DSTB ds, int n, string hoTen)
{
	for (int i = 0; i < n; i++)
		if (ds[i].HoTen.compare(hoTen) == 0)
			return true;
	return false;
}

void TimSDTKhiBietHoTen(DSTB ds, int n, string hoTen)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].HoTen.compare(hoTen) == 0) 
			cout << endl << "So dien thoai cua khach hang co ten " << hoTen << " la: " 
				<< "0." << ds[i].SoDT.MaVung << "." << ds[i].SoDT.SoDT;
	}
}

bool KiemTraMaVung(DSTB ds, int n, string maVung)
{
	for (int i = 0; i < n; i++)
		if (ds[i].SoDT.MaVung.compare(maVung) == 0)
			return true;
	return false;
}

bool KiemTraSoDienThoai(DSTB ds, int n, string soDienThoai)
{
	for (int i = 0; i < n; i++)
		if (ds[i].SoDT.SoDT.compare(soDienThoai) == 0)
			return true;
	return false;
}

void TimThongTinTBTheoSoDTCoMaVung(DSTB ds, int n, string maVung, string soDT)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if ((ds[i].SoDT.MaVung.compare(maVung) == 0) && (ds[i].SoDT.SoDT.compare(soDT) == 0))
			Xuat1ThueBao(ds[i]);
	XuatDongKeNgang();
}

void TimThongTinTBTheoSoDTKoCoMaVung(DSTB ds, int n, string soDienThoai)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].SoDT.SoDT.compare(soDienThoai) == 0)
			Xuat1ThueBao(ds[i]);
	XuatDongKeNgang();
}

void TimDiaChiTheoSoDTCoMaVung(DSTB ds, int n, string maVung, string soDienThoai)
{
	for (int i = 0; i < n; i++)
		if (ds[i].SoDT.MaVung.compare(maVung) == 0 && ds[i].SoDT.SoDT.compare(soDienThoai) == 0)
			cout << endl << "Dia chi cua thue bao co so dien thoai " << "0." << maVung << "." << soDienThoai << ": "
				 << ds[i].DiaChi;		
}

void XuatDSTBTheoMaVung(DSTB ds, int n, string maVung)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].SoDT.MaVung.compare(maVung) == 0)
			Xuat1ThueBao(ds[i]);
	XuatDongKeNgang();
}

void HoanVi(ThueBao& x, ThueBao& y)
{
	ThueBao tam;
	tam = x;
	x = y;
	y = tam;
}

void XuatThongTinTBDKSomNhat(DSTB ds, int n)
{
	DSTB a;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i] = ds[j];

	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			bool dk = (a[i].NgayHopDong.Nam > a[j].NgayHopDong.Nam)
				|| (a[i].NgayHopDong.Nam == a[j].NgayHopDong.Nam && a[i].NgayHopDong.Thang > a[j].NgayHopDong.Thang)
				|| (a[i].NgayHopDong.Ngay > a[j].NgayHopDong.Ngay && a[i].NgayHopDong.Nam == a[j].NgayHopDong.Nam && a[i].NgayHopDong.Thang == a[j].NgayHopDong.Thang);
			
			if (dk)
				HoanVi(a[i], a[j]);
		}
	Xuat1ThueBao(a[0]);
	XuatDongKeNgang();
}

void XuatDSTBCoTenTrung(DSTB ds, int n, string ten)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
	{
		string s = ds[i].HoTen;
		if (s.find(ten) != string::npos || s.find(ten) > -1)
			Xuat1ThueBao(ds[i]);
	}
	XuatDongKeNgang();	
}

void XuatTBCoDiaChiNamTrenDuong(DSTB ds, int n, string tenDuong)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
	{
		string s = ds[i].DiaChi;
		if (s.find(tenDuong) != string::npos || s.find(tenDuong) > -1) // Ham find se tra ve vi tri ky tu dau tien cua chuoi tenDuong xuat hien trong chuoi diachi
			Xuat1ThueBao(ds[i]);
	}
	XuatDongKeNgang();
}

void SapXepTangDan(DSTB ds, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (ds[i].SoDT.MaVung.compare(ds[j].SoDT.MaVung) == 1)
				HoanVi(ds[i], ds[j]);

	XuatDSThueBao(ds, n);
}
