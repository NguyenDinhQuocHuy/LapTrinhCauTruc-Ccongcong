#define MAX 100
#define TAB '\t'

struct ThietBi
{
	string MaSo;
	string Ten;
	unsigned int Nam;
	unsigned int TgianBH;
	float Gia;
};

typedef ThietBi DSTB[MAX];

void Nhap1ThietBi(ThietBi& tb);
void NhapDSTB(DSTB ds, int soLuong);
void XuatTieuDe();
void XuatDongKeNgang();
void Xuat1ThietBi(ThietBi tb);
void XuatDSTB(DSTB ds, int soLuong);
double TinhTongGiaTien(DSTB ds, int soLuong, unsigned int x, unsigned int y);
void TimThietBi(DSTB ds, int soLuong, string MaTB);
void HoanVi(ThietBi& a, ThietBi& b);
void SapXepDS(DSTB ds, int soLuong);
void XoaThietBi(DSTB ds, int& soLuong, unsigned int x);
void ChenThietBi(DSTB ds, int &soLuong, string x);
int ThongKeTheoNamNhap(DSTB ds, int soLuong, int x);

void Nhap1ThietBi(ThietBi& tb)
{
	cout << endl << "Nhap ma thiet bi: ";
	cin.ignore();
	_flushall();
	getline(cin, tb.MaSo);

	cout << endl << "Nhap ten thiet bi: ";
	cin.ignore();
	_flushall();
	getline(cin, tb.Ten);

	cout << endl << "Nhap nam nhap: ";
	cin >> tb.Nam;

	cout << endl << "Nhap thoi gian bao hanh: ";
	cin >> tb.Nam;

	cout << endl << "Nhap gia tien: ";
	cin >> tb.Gia;
}

void NhapDSTB(DSTB ds, int soLuong)
{
	for (int i = 0; i < soLuong; i++)
	{
		cout << endl << "Thiet bi thu " << i + 1 << " : ";
		Nhap1ThietBi(ds[i]);
	}
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(8) << "Ma TB"
		<< setw(15) << "Ten TB"
		<< setw(8) << "Nam Nhap"
		<< setw(12) << "TG Bao Hanh"
		<< setw(10) << "Gia tien"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << setiosflags(ios::left)
		<< setw(8) << "======="
		<< setw(15) << "=============="
		<< setw(8) << "======="
		<< setw(12) << "==========="
		<< setw(10) << "========="
		<< endl;
}

void Xuat1ThietBi(ThietBi tb)
{
	cout << setiosflags(ios::left)
		<< setw(8) << tb.MaSo
		<< setw(15) << tb.Ten
		<< setw(8) << tb.Nam
		<< setw(12) << tb.TgianBH
		<< setw(10) << tb.Gia
		<< endl;
}

void XuatDSTB(DSTB ds, int soLuong)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < soLuong; i++)
		Xuat1ThietBi(ds[i]);
	XuatDongKeNgang();
}

double TinhTongGiaTien(DSTB ds, int soLuong, unsigned int x, unsigned int y)
{
	double tong = 0.0;
	for (int i = 0; i < soLuong; i++)
		if (ds[i].Nam >= x && ds[i].Nam <= y)
			tong += ds[i].Gia;
	return tong;
}

void TimThietBi(DSTB ds, int soLuong, string MaTB)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < soLuong; i++)
		if (ds[i].MaSo == MaTB)
			Xuat1ThietBi(ds[i]);
	XuatDongKeNgang();
}

void HoanVi(ThietBi& a, ThietBi& b)
{
	ThietBi c = a;
	a = b;
	b = c;
}

void SapXepDS(DSTB ds, int soLuong)
{
	for(int i = 0;i<soLuong-1;i++)
		for (int j = i + 1; j < soLuong; j++)
		{
			if (ds[i].Nam < ds[j].Nam)
				HoanVi(ds[i], ds[j]);
			else if (ds[i].Nam == ds[j].Nam)
				if (ds[i].Ten > ds[j].Ten)
					HoanVi(ds[i], ds[j]);
		}
}

void XoaThietBi(DSTB ds, int &soLuong, unsigned int x)
{
	for (int i = 0; i < soLuong; i++)
		if (ds[i].Nam == x)
			ds[i] = ds[i + 1];
	soLuong--;
}

void ChenThietBi(DSTB ds, int &soLuong, string x)
{
	int vt = 0;
	for (int i = 0; i < soLuong; i++)
		if (ds[i].MaSo == x)
			vt = i;
	for (int i = soLuong; i > vt; i--)
	{
		ds[i] = ds[i-1];
	}
	Nhap1ThietBi(ds[vt]);
	soLuong++;
}

int ThongKeTheoNamNhap(DSTB ds, int soLuong, int x)
{
	int tong = 0;
	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].Nam == x)
			tong += 1;
	}
	return tong;
}
