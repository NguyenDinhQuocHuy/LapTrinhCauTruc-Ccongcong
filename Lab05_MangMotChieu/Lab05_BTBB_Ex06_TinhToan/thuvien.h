// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB '\t'

typedef int DaySo[MAX];

// Khai bao nguyen mau ham
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int TrungBinhCong(DaySo a, int n);
int TongBinhPhuong(DaySo a, int n);
int DoLechLonNhat(DaySo a, int n);
int TongXoayVong(DaySo a, int n, int k, int start);
int LaSoChinhPhuong(int n);
int TBCongCanBac2SoChinhPhuong(DaySo a, int n);
int KiemTraSo3ChuSo(int n);
int LaSoNT(int n);
int TongSoNT_2ChuSo(DaySo a, int n);
int TongPTXuatHien1Lan(DaySo a, int n);

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
		if ((i + 1) % 5 == 0 || i == n - 1)
			cout << endl;
	}
}

int TrungBinhCong(DaySo a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += a[i];
	return (double)tong / n;
}

int TongBinhPhuong(DaySo a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += pow(a[i], 2);
	return tong;
}

int DoLechLonNhat(DaySo a, int n)
{
	int dMax = 0, d;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n; j++)
			if ((d = abs(a[i] - a[j])) > dMax)
				dMax = d;
	return dMax;

}

int TongXoayVong(DaySo a, int n, int k, int start)
{
	int tong = 0;
	for (int i = 0; i < k; i++)
		tong += a[(start + i) % n];  
/*
    Voi start la chi so bat dau, i la chi so hien tai, chay tu 0 den n-1
	Vi du bat dau tu k = 8, ban dau i = 0 -> a[i] = a[8+0] = a[8]
	Phep toan %n dam bao rang chi so luon nam trong pham vi tu 0 den n - 1
*/
	return tong;
}

int LaSoChinhPhuong(int n)
{
	if (n < 0)
		return 0;
	int canBac2 = (int)sqrt(n);
	if (canBac2 * canBac2 == n)
		return 1;
	else return 0;
}

int TBCongCanBac2SoChinhPhuong(DaySo a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		if (LaSoChinhPhuong(a[i]))
		{
			tong += sqrt(a[i]);
			return tong;
		}
	return 0;
			
}

int LaSoNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int TongSoNT_2ChuSo(DaySo a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		if (a[i] >= 10 && a[i] < 100 && LaSoNT(a[i]))
		{
			tong += a[i];
			return tong;
		}
	return 0;	
}

int TongPTXuatHien1Lan(DaySo a, int n)
{
	bool xuatHien1Lan;
	int i, tong = 0;
	for (i = 0; i < n; i++)
	{
		xuatHien1Lan = true;
		for (int j = 0; j < n; j++)
			if (i != j && a[i] == a[j])
			{
				xuatHien1Lan = false;
				break;
			}
	if (xuatHien1Lan)
		tong += a[i];
	return tong;
    }
}






