#define TAB '\t'
#define MAX 1000

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
void XoaPhanTu(DaySo a, int& n, int vt);
void XoaPhanTuXDauTien(DaySo a, int& n, int x);
void XoaMoiPhanTuX(DaySo a, int& n, int x);
void XoaPhanTuCoGiaTriGanXNhat(DaySo a, int& n, int x);
void XoaPhanTuNgoaiDoanMin_Max(DaySo a, int& n, int min, int max);
int TongUoc(int n);
int KTSoHoanChinh(int n);
void XoaSoHoanChinh(DaySo a, int& n);
double TrungBinhCong(DaySo a, int n);
void XoaCacSoLonHon2LanTBC(DaySo a, int& n);

void NhapMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void NhapTuDong(DaySo a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % MAX - MAX / 2;
	}
}

void XuatMang(DaySo a, int n)
{
	cout << endl << "Cac gia tri cua mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

void XoaPhanTu(DaySo a, int& n, int vt) // ngược lại với chèn, đẩy các phần tử sau lên 1 đơn vị r giảm số phần tử thực sự xuống
{

	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void XoaPhanTuXDauTien(DaySo a, int& n, int x)
{
	int vt;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			vt = i;
			break;
		}
	}
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void XoaMoiPhanTuX(DaySo a, int& n, int x)
{
	int i = 0;
	while (i < n)
	{
		if (a[i] == x)
		{
			for (int vt = i; vt < n - 1; vt++)
			{
				a[vt] = a[vt + 1];
			}
			n--;
		}
		else if (a[i] != x) // nếu khoong có giá trị nào bằng x, tăng i lên
		{
			i++;
		}
	}
}

void XoaPhanTuCoGiaTriGanXNhat(DaySo a, int& n, int x)
{
	int vt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (abs(a[i] - x) < abs(a[vt] - x)) //dùng trị tuyệt đối hiệu số của số đó với x, nếu nhỏ nhất thì gần nhất
			vt = i;
	}
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void XoaPhanTuNgoaiDoanMin_Max(DaySo a, int& n, int min, int max)
{
	int i = 0;
	while (i < n)
	{
		if (a[i]<min || a[i] > max)
		{
			for (int vt = i; vt < n - 1; vt++)
			{
				a[vt] = a[vt + 1];
			}
			n--;
		}
		else if (a[i] > min && a[i] < max)
			i++;
	}
}

int TongUoc(int n)//số hoàn chỉnh là số có tổng ước bằng 2 lần chính nó
{
	int uoc;
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			uoc = i;
			tong += uoc;
		}
	}
	return tong;
}

int KTSoHoanChinh(int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((n * 2) == TongUoc(n))
		{
			return 1;
		}
		else if ((n * 2) != TongUoc(n))
		{
			return 0;
		}
	}
}

void XoaSoHoanChinh(DaySo a, int& n)
{
	int i = 0, vt;

	while (i < n)
	{
		if (KTSoHoanChinh(a[i]) == 1)
		{
			vt = i;
			XoaPhanTu(a, n, vt);
		}
		else if (KTSoHoanChinh(a[i]) == 0)
			i++;
	}
}

double TrungBinhCong(DaySo a, int n)
{
	int tong = 0;
	double tbc = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
	}
	return tbc = (tong / n);
}

void XoaCacSoLonHon2LanTBC(DaySo a, int& n)
{
	int i = 0;
	while (i < n)
	{
		if (a[i] > (2 * TrungBinhCong(a, n)))
		{
			for (int vt = i; vt < n - 1; vt++)
			{
				a[vt] = a[vt + 1];
			}
			n--;
		}
		else if (a[i] < (2 * TrungBinhCong(a, n)))
			i++;
	}
}
