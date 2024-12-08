#define MAX 100
#define TAB '\t'

struct SinhVien
{
	unsigned int MaSo[7];
	char HoTenLot[31];
	char Ten[11];
	char GioiTinh[2];
	float DiemTB[MAX];
	char Lop[11];
};

typedef SinhVien MangSV[MAX];

// Khai bao nguyen mau
void XuatTieuDe();
void XuatDongKeNgang();
void NhapMotSV(SinhVien& nv);
void NhapDSSV(MangSV a, int n);
void XuatMotSV(SinhVien sv);
void XuatDSSV(MangSV a, int n);
void HoanVi(SinhVien& x, SinhVien& y);
void SapGiamTheoDiemTB(MangSV a, int n);

// Dinh nghia ham
void XuatTieuDe()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(9) << "Ma so SV"
		<< setw(31) << "Ho va ten lot"
		<< setw(11) << "Ten"
		<< setw(10) << "Gioi tinh"
		<< setw(8) << "Diem TB"
		<< setw(11) << "Lop"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(9) << "========"
		<< setw(31) << "=============================="
		<< setw(11) << "=========="
		<< setw(10) << "========="
		<< setw(8) << "======="
		<< setw(11) << "=========="
		<< endl;
}

void NhapMotSV(SinhVien& sv)
{
	cout << endl << "Nhap ma so sinh vien: ";
	cin >> sv.MaSo;

	cout << endl << "Nhap ho va ten lot: ";
	cin.ignore(1);
	gets_s(sv.HoTenLot);

	cout << endl << "Nhap ten: ";
	gets_s(sv.Ten);

	cout << endl << "Nhap gioi tinh: ";
	gets_s(sv.GioiTinh);

	cout << endl << "Nhap diem trung binh: ";
	cin >> sv.DiemTB;

	cout << endl << "Nhap lop: ";
	gets_s(sv.Lop);

}

void NhapDSSV(MangSV a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Sinh vien thu " << i + 1 << ": " << endl;
		NhapMotSV(a[i]);
	}
	cout << endl << "Da nhap xong !" << endl;
}

void XuatMotSV(SinhVien sv)
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(9) << sv.MaSo
		<< setw(31) << sv.HoTenLot
		<< setw(11) << sv.Ten
		<< setw(10) << sv.GioiTinh
		<< setw(8) << sv.DiemTB
		<< setw(11) << sv.Lop
		<< endl;
}

void XuatDSSV(MangSV a, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
	{
		XuatMotSV(a[i]);
	}
	XuatDongKeNgang();
	cout << endl;
}

void HoanVi(SinhVien& x, SinhVien& y)
{
	SinhVien tam;
	tam = x;
	x = y;
	y = tam;
}

void SapGiamTheoDiemTB(MangSV a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DiemTB < a[i].DiemTB)
				HoanVi(a[i], a[j]);
}