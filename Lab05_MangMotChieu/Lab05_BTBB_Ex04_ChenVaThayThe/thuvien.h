// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB '\t'

typedef int DaySo[MAX];

// Khai bao nguyen mau ham
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
void ChenPhanTuX(DaySo a, int& n, int x, int vt);
void ChenSauMax(DaySo a, int& n, int x);
int LaSoNT(int n);
void ChenXTruocSNT(DaySo a, int &n, int x);
int TinhTong(DaySo a, int start, int end);
void ChenXChoDMin(DaySo a,int &n, int x);

// Dinh nghia ham
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
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % MAX - MAX / 2;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

void ChenPhanTuX(DaySo a, int& n, int x, int vt)
{
	for (int i = n; i > vt; i--)
		a[i] = a[i - 1];
	a[vt] = x;
	n++;
}

void ChenSauMax(DaySo a, int& n, int x)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[vt])
			vt = i;
	
	for (int i = n; i > vt + 1; i--)
		a[i] = a[i - 1];
	a[vt + 1] = x;
	n++;
}

int LaSoNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i < (int)sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
void ChenXTruocSNT(DaySo a, int &n, int x)
{
	int vt = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] > 0 && LaSoNT(a[i]))
		{
			vt = i;
			break;
		}
	
	for (int i = n; i > vt; i--)
		a[i] = a[i - 1];
	a[vt] = x;
	n++;
}

int TinhTong(DaySo a, int start, int end)
{
	int tong = 0;
	for (int i = start; i < end; i++)
		tong += a[i];
	return tong;
}
void ChenXChoDMin(DaySo a, int &n, int x)
{
	int viTriTotNhat = 0;
	int chenhLechNhoNhat = abs(TinhTong(a, 0, 0) - TinhTong(a, 0, n));
	for (int i = 0; i <= n; i++)
	{
		int tongTrai = TinhTong(a, 0, i);
		int tongPhai = TinhTong(a, i, n);
		int chenhLechHienTai = abs(tongTrai - tongPhai);
		if (chenhLechHienTai < chenhLechNhoNhat)
		{
			chenhLechNhoNhat = chenhLechHienTai;
			viTriTotNhat = i;
		}
	}

	for (int i = n; n > viTriTotNhat; i--)
		a[i] = a[i - 1];
	a[viTriTotNhat] = x;
	n++;
}


