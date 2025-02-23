#define MAX 1000
#define TAB '\t'

struct TaiLieu
{
	string MaTL;
	string TuaDe;
	string LoaiTL;
	int NamXB;
	string TenTG;
	string NhaXB;
	float Gia;
};

typedef TaiLieu DSTL[MAX];

// Khai bao nguyen mau ham
void Nhap1TaiLieu(TaiLieu& tl);
void NhapDSTaiLieu(DSTL ds, int n);
void XuatTieuDe();
void XuatDKNgang();
void Xuat1TaiLieu(TaiLieu tl);
void XuatDSTaiLieu(DSTL ds, int n);
float TongGiaTatCaTaiLieu(DSTL ds, int n);
void Them1TaiLieuTaiViTri(DSTL ds, int& n, TaiLieu tl, int vt);

// Dinh nghia ham
void Nhap1TaiLieu(TaiLieu& tl)
{
	cout << endl << "Nhap ma tai lieu: ";
	cin.ignore();
	_flushall();
	getline(cin, tl.MaTL);

	cout << endl << "Nhap tua de: ";
	cin.ignore();
	_flushall();
	getline(cin, tl.TuaDe);

	cout << endl << "Nhap loai tai lieu: ";
	cin.ignore();
	_flushall();
	getline(cin, tl.LoaiTL);

	cout << endl << "Nhap nam xuat ban: "; cin >> tl.NamXB;

	cout << endl << "Nhap ten tac gia: ";
	cin.ignore();
	_flushall();
	getline(cin, tl.TenTG);

	cout << endl << "Nhap nha xuat ban: ";
	cin.ignore();
	_flushall();
	getline(cin, tl.MaTL);

	cout << endl << "Nhap gia tien: "; cin >> tl.Gia;
}

void NhapDSTaiLieu(DSTL ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Tai lieu thu " << i + 1 << ": " << endl;
		Nhap1TaiLieu(ds[i]);
	}
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(16) << "Ma tai lieu"
		<< setw(21) << "Tua de"
		<< setw(16) << "Loai tai lieu"
		<< setw(16) << "Nam xuat ban"
		<< setw(21) << "Tac gia"
		<< setw(21) << "Nha xuat ban"
		<< setw(10) << "Gia"
		<< endl;
}

void XuatDKNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(16) << "==============="
		<< setw(21) << "===================="
		<< setw(16) << "==============="
		<< setw(16) << "==============="
		<< setw(21) << "===================="
		<< setw(21) << "===================="
		<< setw(10) << "========="
		<< endl;
}

void Xuat1TaiLieu(TaiLieu tl)
{
	cout << endl << setiosflags(ios::left)
		<< setw(16) << tl.MaTL
		<< setw(21) << tl.TuaDe
		<< setw(16) << tl.LoaiTL
		<< setw(16) << tl.NamXB
		<< setw(21) << tl.TenTG
		<< setw(21) << tl.NhaXB
		<< setw(10) << tl.Gia
		<< endl;
}

void XuatDSTaiLieu(DSTL ds, int n)
{
	XuatTieuDe();
	XuatDKNgang();
	for (int i = 0; i < n; i++)
		Xuat1TaiLieu(ds[i]);
	XuatDKNgang();
}

float TongGiaTatCaTaiLieu(DSTL ds, int n)
{
	float tong = 0.0;
	for (int i = 0; i < n; i++)
		tong += ds[i].Gia;
	return tong;
}

void Them1TaiLieuTaiViTri(DSTL ds, int& n, TaiLieu tl, int vt)
{
	for (int i = n; i > vt; i--)
		ds[i] = ds[i - 1];
	ds[vt] = tl;
	n++;
}