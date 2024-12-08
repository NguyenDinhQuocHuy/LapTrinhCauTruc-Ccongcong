#define	TAB	'\t'
#define	MAX	100

struct SinhVien
{
	string MSSV;
	string HoTenLot;
	string Ten;
	string GioiTinh;
	float DiemTB;
	string Lop;
};

typedef SinhVien DSSV[MAX];

// Khai bao nguyen mau ham
void NhapMotSV(SinhVien& sv);
void NhapDSSV(DSSV ds, int n);
void XuatTieuDe();
void XuatDongKeNgang();
void Xuat1SV(SinhVien sv);
void XuatDSSV(DSSV ds, int n);
void HoanVi(SinhVien& x, SinhVien& y);
void SapGiamTheoDiemTB(DSSV ds, int n);
void SapTangTheoTen(DSSV ds, int n);
int KiemTraTen(DSSV ds, int n, string tenSV);
void TimSVTheoTen(DSSV ds, int n, string tenSV);
int KiemTraLop(DSSV ds, int n, string lop);
void XuatDSSVTheoLop(DSSV ds, int& n, string lop);
void XuatDSSVKoDcTotNghiep(DSSV ds, int n);
int KiemTraMaSo(DSSV ds, int n, string maSo);
void TimSinhVienTheoMSSV(DSSV ds, int n, string maSo);
float TyLeSVGioiTroLen(DSSV ds, int n);
void PhanLoaiHocLucTheoDiemTB(DSSV ds, int n);
int DemSVTheoHocLuc(DSSV ds, int n, string hocLuc);
float TyLeTheoHocLuc(DSSV ds, int n, string hocLuc);
float DiemTBTatCaSV(DSSV ds, int n);
int SoSVTheoGioiTinh(DSSV ds, int n, string gioiTinh);
int DemSLSVTheoLop(DSSV ds, int n, string lop);
void ThongKeSLSVTheoLop(DSSV ds, int n, string lop);
float DiemTBCaoNhat(DSSV ds, int n);
void XuatSVDiemTBCaoNhat(DSSV ds, int n, float max);

// Dinh nghia ham
void NhapMotSV(SinhVien& sv)
{
	cout << endl << "Nhap ma so sinh vien: ";
	cin.ignore();
	_flushall();
	getline(cin, sv.MSSV);

	cout << endl << "Nhap ho va ten lot: ";
	cin.ignore();
	_flushall();
	getline(cin, sv.HoTenLot);

	cout << endl << "Nhap ten sinh vien: ";
	cin.ignore();
	_flushall();
	getline(cin, sv.Ten);

	cout << endl << "Nhap gioi tinh: ";
	cin.ignore();
	_flushall();
	getline(cin, sv.GioiTinh);

	cout << endl << "Nhap diem trung binh: ";
	cin >> sv.DiemTB;

	cout << endl << "Nhap ten lop: ";
	cin.ignore();
	_flushall();
	getline(cin, sv.Lop);
}

void NhapDSSV(DSSV ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << i + 1 << ". Sinh vien thu " << i + 1 << ": " << endl;
		NhapMotSV(ds[i]);
	}
	cout << endl << "Da nhap xong !";
}

void XuatTieuDe()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(8) << "MSSV"
		<< setw(31) << "Ho va ten lot"
		<< setw(11) << "Ten"
		<< setw(11) << "Gioi tinh"
		<< setw(9) << "Diem TB"
		<< setw(11) << "Lop"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(8) << "======="
		<< setw(31) << "=============================="
		<< setw(11) << "=========="
		<< setw(11) << "=========="
		<< setw(9) << "========"
		<< setw(11) << "=========="
		<< endl;
}

void Xuat1SV(SinhVien sv)
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(8) << sv.MSSV
		<< setw(31) << sv.HoTenLot
		<< setw(11) << sv.Ten
		<< setw(11) << sv.GioiTinh
		<< setw(9) << sv.DiemTB
		<< setw(11) << sv.Lop
		<< endl;
}

void XuatDSSV(DSSV ds, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();

	for (int i = 0; i < n; i++)
		Xuat1SV(ds[i]);

	XuatDongKeNgang();

}

void HoanVi(SinhVien& x, SinhVien& y)
{
	SinhVien tam;
	tam = x;
	x = y;
	y = tam;
}

void SapGiamTheoDiemTB(DSSV ds, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (ds[i].DiemTB < ds[j].DiemTB)
				HoanVi(ds[i], ds[j]);
}

void SapTangTheoTen(DSSV ds, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			int dk = (ds[i].Ten.compare(ds[j].Ten) == 1)
				|| ((ds[i].Ten.compare(ds[j].Ten) == 0) && (ds[i].HoTenLot.compare(ds[j].HoTenLot) == 1));
			if (dk)
				HoanVi(ds[i], ds[j]);
		}
}

int KiemTraTen(DSSV ds, int n, string tenSV)
{
	for (int i = 0; i < n; i++)
		if (ds[i].Ten.compare(tenSV) == 0)
			return 1;
	return 0;
}

void TimSVTheoTen(DSSV ds, int n, string tenSV)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].Ten.compare(tenSV) == 0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();
}

int KiemTraLop(DSSV ds, int n, string lop)
{
	for (int i = 0; i < n; i++)
		if (ds[i].Lop.compare(lop) == 0)
			return 1;
	return 0;
}

void XuatDSSVTheoLop(DSSV ds, int& n, string lop)
{
	cout << endl << "Danh sach sinh vien lop " << lop << "la: " << endl;
	SapTangTheoTen(ds, n);
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].Lop.compare(lop) == 0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();
}

void XuatDSSVKoDcTotNghiep(DSSV ds, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB < 5.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();
}

int KiemTraMaSo(DSSV ds, int n, string maSo)
{
	for (int i = 0; i < n; i++)
		if (ds[i].MSSV.compare(maSo) == 0)
			return 1;
	return 0;
}

void TimSinhVienTheoMSSV(DSSV ds, int n, string maSo)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].MSSV.compare(maSo) == 0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();
}

float TyLeSVGioiTroLen(DSSV ds, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 8.0 && ds[i].DiemTB <= 10.0)
			dem++;
	float tyLe = (dem * 100.0) / n;
	return tyLe;
}

void PhanLoaiHocLucTheoDiemTB(DSSV ds, int n)
{
	// Hoc luc xuat sac:
	cout << endl << "Hoc luc xuat sac: ";
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 9.0 && ds[i].DiemTB <= 10.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();

	// Hoc luc gioi:
	cout << endl;
	cout << endl << "Hoc luc gioi: " << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 8.0 && ds[i].DiemTB < 9.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();

	// Hoc luc kha:
	cout << endl;
	cout << endl << "Hoc luc kha: " << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 7.0 && ds[i].DiemTB < 8.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();

	// Hoc luc trung binh kha:
	cout << endl;
	cout << endl << "Hoc luc trung binh kha: " << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 6.5 && ds[i].DiemTB < 7.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();

	// Hoc luc trung binh:
	cout << endl;
	cout << endl << "Hoc luc trung binh: " << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 5.0 && ds[i].DiemTB < 6.5)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();

	// Hoc luc yeu:
	cout << endl;
	cout << endl << "Hoc luc yeu: " << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 3.0 && ds[i].DiemTB < 5.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();

	// Hoc luc kem:
	cout << endl;
	cout << endl << "Hoc luc kem: " << endl;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= 0.0 && ds[i].DiemTB < 3.0)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();
}

int DemSVTheoHocLuc(DSSV ds, int n, string hocLuc)
{
	int dem = 0;
	if (hocLuc == "Xuat sac")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 9.0 && ds[i].DiemTB <= 10.0)
				dem++;
	}
	else if (hocLuc == "Gioi")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 8.0 && ds[i].DiemTB < 9.0)
				dem++;
	}
	else if (hocLuc == "Kha")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 7.0 && ds[i].DiemTB < 8.0)
				dem++;
	}
	else if (hocLuc == "TB Kha")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 6.5 && ds[i].DiemTB < 7.0)
				dem++;
	}
	else if (hocLuc == "TB")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 5.0 && ds[i].DiemTB < 6.5)
				dem++;
	}
	else if (hocLuc == "Yeu")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 3.0 && ds[i].DiemTB < 5.0)
				dem++;
	}
	else if (hocLuc == "Kem")
	{
		for (int i = 0; i < n; i++)
			if (ds[i].DiemTB >= 0.0 && ds[i].DiemTB < 3.0)
				dem++;
	}
	
	return dem;
}

float TyLeTheoHocLuc(DSSV ds, int n, string hocLuc)
{
	int soSV = DemSVTheoHocLuc(ds, n, hocLuc);
	return (soSV * 100.0) / n;
}

void XuatTyLeTheoHocLuc(DSSV ds, int n, string hocLuc)
{
	cout << endl << "Hoc luc       " << "Ty le (%)";
	cout << endl << "============== " << "=========";
	cout << endl << "Xuat sac       " << fixed << setprecision(2) << TyLeTheoHocLuc(ds, n, "Xuat sac") << "%";
	cout << endl << "Gioi           " << setprecision(2) << TyLeTheoHocLuc(ds, n, "Gioi") << "%";
	cout << endl << "Kha            " << setprecision(2) << TyLeTheoHocLuc(ds, n, "Kha") << "%";
	cout << endl << "Trung binh kha " << setprecision(2) << TyLeTheoHocLuc(ds, n, "TBKha") << "%";
	cout << endl << "Trung binh     " << setprecision(2) << TyLeTheoHocLuc(ds, n, "Trung binh") << "%";
	cout << endl << "Yeu            " << setprecision(2) << TyLeTheoHocLuc(ds, n, "Yeu") << "%";
	cout << endl << "Kem            " << setprecision(2) << TyLeTheoHocLuc(ds, n, "Kem") << "%";
	cout << endl << "============== " << "=========";
}

float DiemTBTatCaSV(DSSV ds, int n)
{
	float tongDiem = 0;
	for (int i = 0; i < n; i++)
		tongDiem += ds[i].DiemTB;
	return float(tongDiem / n);
}

int SoSVTheoGioiTinh(DSSV ds, int n, string gioiTinh)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].GioiTinh.compare(gioiTinh) == 0)
			dem++;
	return dem;
}

int DemSLSVTheoLop(DSSV ds, int n, string lop)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].Lop.compare(lop) == 0)
			dem++;
	return dem;
}

void ThongKeSLSVTheoLop(DSSV ds, int n, string lop)
{
	cout << endl << "Lop     " << " So luong";
	cout << endl << "======  " << " ========";
	cout << endl << "CTK48A  " << "    " << DemSLSVTheoLop(ds, n, "CTK48A");
	cout << endl << "CTK48B  " << "    " << DemSLSVTheoLop(ds, n, "CTK48B");
	cout << endl << "======  " << " ========";
}

float DiemTBCaoNhat(DSSV ds, int n)
{
	int max = 9.0;
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB > max)
			max = ds[i].DiemTB;
	return max;
}

void XuatSVDiemTBCaoNhat(DSSV ds, int n, float max)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].DiemTB >= max)
			Xuat1SV(ds[i]);
	XuatDongKeNgang();
}

