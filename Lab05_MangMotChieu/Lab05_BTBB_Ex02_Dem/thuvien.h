// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB "\t"

// Dinh nghia kieu du lieu mang mot chieu
typedef int DaySo[MAX];

// Khai bao nguyen mau cac ham xu ly
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int DemSoLe(DaySo a, int n);
void DemXuatChiaHet3_KhongChiaHet4(DaySo a, int n);
int DemXHViTriLe(DaySo a, int n, int x);
int KiemTraSo3ChuSo(int n);
int DemSo3ChuSo(DaySo a, int n);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);
int DemSoNamNgoaiPhamVi(DaySo a, int n, int min, int max);
int KT_SoChinhPhuong(int n);
int DemSoChinhPhuong(DaySo a, int n);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);
int DemSoLanXuatHien(DaySo a, int n, int x);
bool KiemTraXuatHien(DaySo a, int n, int x);
void DemVaXuatPTuXuaHienK(DaySo a, int n, int k);

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

int DemSoLe(DaySo a, int n)
{
	int dem = 0;
		for (int i = 0; i < n; i++)
			if (a[i] % 2 != 0)
				dem++;
	return dem;
}

void DemXuatChiaHet3_KhongChiaHet4(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0 && a[i] % 4 != 0)
		{
			dem++;
			cout << endl << "Co " << dem << " so chia het cho 3 ma khong chia het cho 4 !";
			cout << endl << a[i] << TAB;
		}
}

int DemXHViTriLe(DaySo a, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (i % 2 != 0 && a[i] == x)
			dem++;
	return dem;
}

int KiemTraSo3ChuSo(int n)
{
	int kq = 0, dem = 0;

	while (n > 0)
	{
		dem++;
		n /= 10;
	}

	if (dem == 3)
		kq = 1;
	return kq;
}

int DemSo3ChuSo(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraSo3ChuSo(a[i]))
			dem++;
	return dem;

}

int DemSoNamNgoaiPhamVi(DaySo a, int n, int min, int max)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (a[i] < min || a[i] > max)
			dem++;

	return dem;
}

int KT_SoChinhPhuong(int n)
{
	int tam = (int)sqrt((double)n);
	return (tam * tam == n);
}

int DemSoChinhPhuong(DaySo a, int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (KT_SoChinhPhuong(a[i]))
			dem++;

	return dem;
}

int SoLanXuatHien_X(DaySo a, int n, int x, int vt)
{
	if (vt >= n)
		return 0;

	int dem = 0;
	for (int i = vt; i < n; i++)
		if (a[i] == x)
			dem++;

	return dem;
}

bool KiemTraXuatHien(DaySo a, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return false;
	return true;

}


int DemSoLanXuatHien(DaySo a, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem ++;
	return dem;
}

void DemVaXuatPTuXuaHienK(DaySo a, int n, int k)
{
	DaySo b;
	int x = 0, dk;
	for (int i = 0; i < n; i++)
	{
		dk = (KiemTraXuatHien(b, n, a[i]) == true && DemSoLanXuatHien(a, n, a[i]) >= k);
		if (dk)
		{
			b[x] = a[i];
			cout << b[x] << endl;
			x++;
		}
	}
}
