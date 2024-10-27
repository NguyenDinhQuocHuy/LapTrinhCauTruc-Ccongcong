// Dinh nghia hang so va cac kieu du lieu moi
#define MAX 1000
#define TAB "\t"

// Dinh nghia kieu du lieu mang mot chieu
typedef int DaySo[MAX];

// Khai bao nguyen mau cac ham xu ly
void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);

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
