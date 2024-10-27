// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB "\t"

// Dinh nghia kieu du lieu mang mot chieu
typedef int DaySo[MAX];

// Khai bao nguyen mau cac ham xu ly
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int DemX(DaySo a, int n, int x);
int TinhTong(DaySo a, int n);
int LaSoNT(int n);
int DemVaXuatSoNT(DaySo a, int n);
void HoanVi(int &x, int &y); 
/* De luu su thay doi sau khi ra khoi ham HoanVi,
 neu khong co dau & thi no se khong luu su thay doi ma chi luu gia tri ban dau */
void SapDuongT_AmG_Khong(DaySo a, int n);

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

int DemX(DaySo a, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int TinhTong(DaySo a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int LaSoNT(int n)
{
	// Nhung so be hon 2 deu khong phai la so nguyen to
	if (n < 2)
		return 0;

	// Tinh can bac 2 cua n
	int m = (int)sqrt((double)n);

	for (int i = 2; i <= m; i++)      // Neu co so nao do la uoc cua n thi n khong phai la so nguyen to
		if (n % i == 0)
			return 0;
	return 1;
}

int DemVaXuatSoNT(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (LaSoNT(a[i]))
		{
			dem++;
			cout << a[i] << TAB;
		}
	cout << endl;
	return dem;
}

void HoanVi(int& x, int& y)
{
	int tam = x;
	x = y;
	y = tam;
}

void SapDuongT_AmG_Khong(DaySo a, int n)
{
	int doiCho;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; i < (n - 1); i++)
		{
			doiCho = (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				|| (a[i] < 0 && a[j] != 0 && a[i] < a[j])
				|| (a[i] == 0 && a[j] != 0);

			if (doiCho) HoanVi(a[i], a[j]);
		}
	}
}
