#define MAX 100
struct NhanVien
{
	char MaNV[8];
	char HoLot[21];
	char Ten[8];
	unsigned int NamSinh;
	double Luong;
};

typedef NhanVien MangNV[MAX];
//Khai bao nguyen mau
NhanVien Nhap1NV();
void Nhap1NV_C2(NhanVien& nv);
void Xuat1NV(NhanVien nv);
void XuatTieuDe();
void NhapDS(MangNV ds, int n);
int TimTheoMa(MangNV ds, int n, char MaNV[8]);
void HoanVi(NhanVien& nv1, NhanVien& nv2);
void SapTangTen_GiamNS(MangNV ds, int n);

//Dinh nghia ham
//1. Viet ham nhap 1 nhan vien
/*input:
output: nhan vien da nhap thong tin*/
NhanVien Nhap1NV()
{
	NhanVien nv;

	cout << "\nNhap Ma NV:";
	cin >> nv.MaNV;
	cout << "Nhap Ho lot:";
	//_flushall();
	cin.ignore(1);
	gets_s(nv.HoLot);
	cout << "Ten nhan vien:";

	gets_s(nv.Ten);
	cout << "Nam sinh:";
	cin >> nv.NamSinh;
	cout << "Tien luong:";
	cin >> nv.Luong;

	return nv;
}

void Nhap1NV_C2(NhanVien& nv)
{
	cout << "\nNhap Ma NV:";
	cin >> nv.MaNV;
	cout << "Nhap Ho lot:";
	cin.ignore(1);
	gets_s(nv.HoLot);
	cout << "Ten nhan vien:";
	gets_s(nv.Ten);
	cout << "Nam sinh:";
	cin >> nv.NamSinh;
	cout << "Tien luong:";
	cin >> nv.Luong;
}

void Xuat1NV(NhanVien nv)
{
	cout << "\n" << setiosflags(ios::left)
		<< setw(10) << nv.MaNV
		<< setw(15) << nv.HoLot
		<< setw(7) << nv.Ten
		<< setw(8) << nv.NamSinh
		<< setw(10) << nv.Luong;
}

void NhapDS(MangNV ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin cho NV thu " << i + 1;
		ds[i] = Nhap1NV();
		//Nhap1NV_C2(ds[i]);
	}
}

void XuatTieuDe()
{
	cout << "\n" << setiosflags(ios::left)
		<< setw(10) << "Ma NV"
		<< setw(15) << "Ho ten lot"
		<< setw(7) << "Ten"
		<< setw(8) << "Nam sinh"
		<< setw(10) << "Luong";
}
void XuatDS(MangNV ds, int n)
{
	XuatTieuDe();
	cout << "\n=====================================================";
	for (int i = 0; i < n; i++)
	{
		Xuat1NV(ds[i]);
	}
	cout << "\n=====================================================";
}

int TimTheoMa(MangNV ds, int n, char MaNV[8])
{
	int vt = -1;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(ds[i].MaNV, MaNV) == 0)
		{
			vt = i;
			break;
		}
	}
	return vt;
}
void HoanVi(NhanVien& nv1, NhanVien& nv2)
{
	NhanVien nv = nv1;
	nv1 = nv2;
	nv2 = nv;
}

void SapTangTen_GiamNS(MangNV ds, int n)
{
	int dk = 1;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			dk = strcmp(ds[i].Ten, ds[j].Ten) > 0 ||
				(strcmp(ds[i].Ten, ds[j].Ten) == 0
					&& ds[i].NamSinh < ds[j].NamSinh);
			if (dk)
				HoanVi(ds[i], ds[j]);
		}
}


