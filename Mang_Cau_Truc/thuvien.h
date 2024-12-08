#define MAX 100
#define TAB '\t'

struct ThietBi
{
	char MaTB[MAX];
	char TenTB[MAX];
	int NamNhap[MAX];
	int TGBaoHanh[MAX];
	float GiaTien[MAX];
};

typedef ThietBi MangTB[MAX];

// Khai bao nguyen mau
void XuatTieuDe();
void XuatDongKeNgang();
void XuatMotTB(ThietBi tb);
void XuatDSTB(MangTB a, int n);
void NhapMotTB(ThietBi& nv);
void NhapDSTB(MangTB a, int n);
float TongGiaTienTheoNamNhap(MangTB a, int n, int x, int y);
int TimViTriTBTheoMa(MangTB a, int n, int maTB);
void HoanVi(ThietBi a, ThietBi b);
void SapGiamTheoNamNhap(MangTB a, int n);

// Dinh nghia ham
void XuatTieuDe()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(8) << "Ma TB"
		<< setw(14) << "Ten TB"
		<< setw(9) << "Nam nhap"
		<< setw(11) << "TG Bao hanh"
		<< setw(9) << "Gia tien"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(8) << "======="
		<< setw(14) << "============="
		<< setw(9) << "========"
		<< setw(11) << "=========="
		<< setw(9) << "========"
		<< endl;
}

void XuatMotTB(ThietBi tb)
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(8) << tb.MaTB
		<< setw(14) << tb.TenTB
		<< setw(9) << tb.NamNhap
		<< setw(11) << tb.TGBaoHanh
		<< setw(9) << tb.GiaTien
		<< endl;
}

void XuatDSTB(MangTB a, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
	{
		XuatMotTB(a[i]);
	}
	XuatDongKeNgang();
	cout << endl;
}

void NhapMotTB(ThietBi& tb)
{
	cout << "Nhap ma thiet bi: ";
	cin >> tb.MaTB;

	cout << "Nhap ten thiet bi: ";
	cin.ignore();
	_flushall();
	gets_s(tb.TenTB);

	cout << endl << "Nhap nam nhap";
	cin >> tb.NamNhap;

	cout << "Nhap thoi gian bao hanh";
	cin >> tb.TGBaoHanh;

}

void NhapDSTB(MangTB a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Thiet bi thu " << i + 1 << ": " << endl;
		NhapMotTB(a[i]);
	}
	cout << endl << "Da nhap xong !" << endl;
}

float TongGiaTienTheoNamNhap(MangTB a, int n, int x, int y)
{
	float tong = 0;
	for (int i = 0; i < n; i++)
		if ((a[i].NamNhap >= x) && (a[i].NamNhap <= y))
			tong += a[i].GiaTien;
	return tong;
}

int TimViTriTBTheoMa(MangTB a, int n, char maTB)
{
	for (int i = 0; i < n; i++)
		if (strcmp(a[i].MaTB, maTB) == 1)
			return i;
	return 0;
}

void HoanVi(ThietBi &a, ThietBi &b)
{
	ThietBi tam;
	tam = a;
	a = b;
	b = tam;
}

void SapGiamTheoNamNhap(MangTB a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if ((a[i].NamNhap > a[j].NamNhap) && (strcmp(a[i].TenTB, a[j].TenTB) == -1)
				HoanVi(a[i], a[j]);
}