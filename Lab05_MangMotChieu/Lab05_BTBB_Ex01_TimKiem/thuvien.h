// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB "\t"

// Dinh nghia kieu du lieu mang mot chieu
typedef int DaySo[MAX];

// Khai bao nguyen mau cac ham xu ly
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int ViTriXDauTien(DaySo a, int n, int x);
int LaSoNT(int n);
int VTSoNTCuoiCung(DaySo a, int n);
int DemSoLanXuatHien(DaySo a, int n, int x);
int PhanTuXuatHienNhieuNhat(DaySo a, int n);
int ViTriMin(DaySo a, int n);
int TongUoc(int n);
void SoHoanChinh(DaySo a, int n);
int SoAmLonNhat(DaySo a, int n);
int SoDuongNhoNhat(DaySo a, int n);
int TimPTGanNhat(DaySo a, int n, int x);

// Dinh nghia cac ham xu ly
void NhapMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void NhapTuDong(DaySo a, int n)
{
	srand(time(NULL));  // Gieo so ngau nhien dau tien
	for (int i = 0; i < n; i++)
	{
		// Sinh mot so ngau nhien trong pham vi [0...MAX) roi gan cho phan tu thu i
		a[i] = rand() % MAX - MAX / 2;
	}

}

void XuatMang(DaySo a, int n)
{
	cout << endl << "Cac phan tu cua mang : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

int ViTriXDauTien(DaySo a, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
		{
			return i;
		}
	return -1;
			
}

int LaSoNT(int n)
{
	if (n < 2) return 0;
	int m = (int)sqrt((double)n);
	for (int i = 2; i <= m; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int VTSoNTCuoiCung(DaySo a, int n)
{
	for (int i = n - 1; i >= n; i--)
		if (LaSoNT(a[i]))
		{
			return i;
			break;
		}
			
	return -1;
}

int DemSoLanXuatHien(DaySo a, int n, int x)
{
	int dem = 1, i;

	for (i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int PhanTuXuatHienNhieuNhat(DaySo a, int n)
{
	int kq = a[0], i, dem = DemSoLanXuatHien(a, n, a[0]);

	for (i = 1; i < n; i++)
	{
		int soLan = DemSoLanXuatHien(a, n, a[i]);
		if (soLan > dem)
		{
			dem = soLan;
			kq = a[i];
		}
	}
	return kq;
}

int ViTriMin(DaySo a, int n)
{
	int viTri = 0;
	int min = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			viTri = i;
		}
	return viTri;
}

int TongUoc(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			tong += i;
	return tong;
}

void SoHoanChinh(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		if (TongUoc(a[i]) == (2 * a[i]))
			cout << a[i] << TAB;	
}

int SoAmLonNhat(DaySo a, int n)
{
	int kq = a[0], vt = -1, i;

	for (i = 0; i < n; i++)
		if (a[i] < 0)
		{
			kq = a[i];
			vt = i;
			break;
		}


	if (vt == -1)
		return vt;

	for (i; i < n; i++)
	{
		if (a[i] < 0 && a[i] > kq)
		{
			kq = a[i];
			vt = i;
		}
	}
	return vt;
}

int SoDuongNhoNhat(DaySo a, int n)
{
	int kq = a[0], vt = -1, i;
	for (i = 0; i < n; i++)
		if (a[i] > 0)
		{
			kq = a[i];
			vt = i;
			break;
		}

	if (vt == -1)
		return vt;

	for (i; i < n; i++)
		if (a[i] > 0 && (a[i] < kq))
		{
			kq = a[i];
			vt = i;
		}
	return vt;
}
	
int TimPTGanNhat(DaySo a, int n, int x)
{
	int ganNhat = a[0];
	for (int i = 1; i < n; i++)
		if (abs(a[i] - x) < abs(ganNhat - x))
			ganNhat = a[i];
	return ganNhat;		
}



	