#define MAX 100
#define TAB '\t'

struct ThongTinXe
{
	string BienSoXe;
	string TenXe;
	int NamSanXuat;
	string HangSanXuat;
	int Gia;
};

typedef ThongTinXe DSQL[MAX];
typedef string DSTK[MAX]; // Khai bao 1 mang phu de xuat thong ke

// Khai bao nguyen mau ham
void Nhap1Xe(ThongTinXe& xe);
void NhapDSXe(DSQL ds, int n);
void XuatTieuDe();
void XuatDKNgang();
void Xuat1Xe(ThongTinXe xe);
void XuatDSXe(DSQL ds, int n);
int TongGiaMuaTheoNam(DSQL ds, int n, int x, int y);
int TimXeCuoiCungTheoHangSX(DSQL ds, int n, string hangSX);
void HoanVi(ThongTinXe& x, ThongTinXe& y);
void SapGiamTheoHangXe(DSQL ds, int n);
void XoaXeTheoNamSX(DSQL ds, int& n, int namSX);
int SoXeTheoHangSX(DSQL ds, int n, string hangSX);
void TKSoXeTheoHangSX(DSQL ds, int n);
void TKCach2(DSQL ds, int n);

// Dinh nghia ham
void Nhap1Xe(ThongTinXe& xe)
{
	cout << endl << "Nhap bien so xe: ";
	cin.ignore();
	_flushall();
	getline(cin, xe.BienSoXe);

	cout << endl << "Nhap ten xe: ";
	cin.ignore();
	_flushall();
	getline(cin, xe.TenXe);
	

	cout << endl << "Nhap nam san xuat: ";
	cin >> xe.NamSanXuat;
	

	cout << endl << "Nhap hang san xuat: ";
	cin.ignore();
	_flushall();
	getline(cin, xe.HangSanXuat);
	

	cout << endl << "Nhap gia: ";
	cin >> xe.Gia;
	
}

void NhapDSXe(DSQL ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Xe thu " << i + 1 << ":";
		Nhap1Xe(ds[i]);
	}
	cout << endl << "Da nhap xong !";
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(12) << "Bien so xe"
		<< setw(18) << "    Ten xe"
		<< setw(8) << "Nam SX"
		<< setw(9) << "Hang SX"
		<< setw(18) << "Gia (Trieu dong)"
		<< endl;
}

void XuatDKNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(12) << "=========="
		<< setw(18) << "================"
		<< setw(8) << "======"
		<< setw(9) << "======="
		<< setw(18) << "================"
		<< endl;
}

void Xuat1Xe(ThongTinXe xe)
{

	cout << endl << setiosflags(ios::left)
		<< setw(12) << xe.BienSoXe
		<< setw(18) << xe.TenXe
		<< setw(8) << xe.NamSanXuat
		<< setw(9) << xe.HangSanXuat
		<< "     " << setw(18) << xe.Gia
		<< endl;
}

void XuatDSXe(DSQL ds, int n)
{
	XuatTieuDe();
	XuatDKNgang();
	for (int i = 0; i < n; i++)
		Xuat1Xe(ds[i]);
	XuatDKNgang();
}

int TongGiaMuaTheoNam(DSQL ds, int n, int x, int y)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].NamSanXuat >= x && ds[i].NamSanXuat <= y)
			tong += ds[i].Gia;
	return tong;
}

int TimXeCuoiCungTheoHangSX(DSQL ds, int n, string hangSX)
{
	for (int i = n; i >= 0; i--)
		if (ds[i].HangSanXuat.compare(hangSX) == 0)
			return i;
	return -1;
}

void HoanVi(ThongTinXe& x, ThongTinXe& y)
{
	ThongTinXe tam;
	tam = x;
	x = y;
	y = tam;
}

void SapGiamTheoHangXe(DSQL ds, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			int dk = (ds[i].HangSanXuat.compare(ds[j].HangSanXuat) < 0) 
				|| (ds[i].HangSanXuat.compare(ds[j].HangSanXuat) == 0 && ds[i].Gia > ds[j].Gia);
			if (dk)
				HoanVi(ds[i], ds[j]);
		}
}

void XoaXeTheoNamSX(DSQL ds, int& n, int namSX)
{
	for (int i = 0; i < n; i++)
		if (ds[i].NamSanXuat == namSX)
		{
			ds[i] = ds[i + 1];
			n--;
		}
}

int SoXeTheoHangSX(DSQL ds, int n, string hangSX)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ds[i].HangSanXuat.compare(hangSX) == 0)
			dem++;
	return dem;
}

void TKSoXeTheoHangSX(DSQL ds, int n)
{
	cout << endl << "Hang san xuat  " << "So xe";
	cout << endl << "=============  " << "=====";
	cout << endl << "Hyundai        " << "  " << SoXeTheoHangSX(ds, n, "Hyundai");
	cout << endl << "Haeco          " << "  " << SoXeTheoHangSX(ds, n, "Haeco");
	cout << endl << "Thaco          " << "  " << SoXeTheoHangSX(ds, n, "Thaco");
	cout << endl << "=============  " << "=====";

}

void TKCach2(DSQL ds, int n)
{
	int dem = 0;
	DSTK a; // Goi mang phu de luu cac hang xe
	int soHangXe = 0; // So phan tu ban dau cua mang phu

	// Xuat tieu de
	cout << endl << left << setw(10) << "Hang SX" << right << setw(5) << "SL";
	cout << endl << "=======      ==";

	// Xuat thong ke
	// Chay 2 vong lap for de kiem tra, vong 1 duyet cac phan tu trong danh sach xe, vong 2 duyet cac phan tu trong mang phu
	for (int i = 0; i < n; i++) // Duyet cac phan tu cua mang danh sach ban dau, kiem tra xem co xuat hien trong mang phu hay khong
	{
		bool daTK = false;
		for (int j = 0; j < soHangXe; j++)             // Duyet cac phan tu cua mang phu
			if (a[j].compare(ds[i].HangSanXuat) == 0)
				daTK = true;                      // Hang xe da xuat hien trong mang phu thi dung, neu chua xuat hien thi xuat thong ke
		
		if (daTK == false)
		{
			dem = SoXeTheoHangSX(ds, n, ds[i].HangSanXuat);
			cout << endl << left << setw(10) << ds[i].HangSanXuat << right << setw(5) << dem;

			a[soHangXe] = ds[i].HangSanXuat;          // Luu hang san xuat vao mang phu
			soHangXe++;                                // Tang so phan tu cua mang phu
		}
	}
		
	
	cout << endl << "=======      ==";
}
