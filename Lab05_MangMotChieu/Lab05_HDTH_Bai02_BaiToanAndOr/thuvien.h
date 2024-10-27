// Bai toan AND, OR va thu - sai

// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB "\t"

// Dinh nghia kieu du lieu mang mot chieu
typedef int DaySo[MAX];

// Khai bao nguyen mau cac ham xu ly
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int ChuaX(DaySo a, int n, int x);
int LaMangTang(DaySo a, int n);
int TimMax(DaySo a, int n);
int TimViTriMax(DaySo a, int n);

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
		a[i] = rand() % MAX;
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

int ChuaX(DaySo a, int n, int x)
{
	int kq = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)    // Neu tim thay phan tu x thi cap nhat ket qua va dung, khong can tim nua
		{
			kq = 1;
			break;
		}
	}
	return kq;
}

int LaMangTang(DaySo a, int n)
{
	int kq = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
		{
			kq = 0;
			break;
		}
	}
	return kq;
}

int TimMax(DaySo a, int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int TimViTriMax(DaySo a, int n)
{
	int vt = 0, max = a[vt];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			vt = i;
			max = a[i];
		}
	}
	return vt;
}