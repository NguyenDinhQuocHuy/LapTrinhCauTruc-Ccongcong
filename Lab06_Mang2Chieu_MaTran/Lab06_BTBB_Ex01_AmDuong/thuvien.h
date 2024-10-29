// Dinh nghia hang so va cac kieu du lieu moi
#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
float TongSoDuongNhoNhatHang(MaTran a, int n);
float TongSoAmLonNhatCot(MaTran a, int n);
float TinhT_S(MaTran a, int n);

// Dinh nghia ham
void NhapMaTran(MaTran a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Hang thu: " << i << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << " , " << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void NhapTuDong(MaTran a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % MAX - MAX / 2;
}

void XuatMaTran(MaTran a, int n)
{
	cout << endl << "Cac phan tu cua ma tran: " << endl;;
	for (int i = 0; i < n; i++)
	{
		{
			for (int j = 0; j < n; j++)
				cout << a[i][j] << TAB;
		}
		cout << endl;
	}
	cout << endl << endl;
}

float TongSoDuongNhoNhatHang(MaTran a, int n)
{
	float tong = 0.0;
	for (int i = 0; i < n; i++)
	{
		float min = -1.0;
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				if (min == -1.0 || a[i][j] < min)
					min = a[i][j];
		if (min > 0)
			tong += min;
	}
	return tong;
}

float TongSoAmLonNhatCot(MaTran a, int n)
{
	float tong = 1.0;
	for (int i = 0; i < n; i++)
	{
		float max = 1.0;
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				if (max == 1.0 || a[i][j] > max)
					max = a[i][j];
		if (max < 0)
			tong += max;
		return tong;
	}
}

float TinhT_S(MaTran a, int n)
{
	float s = TongS(a, n), t = TongT(a, n);
	float hieu = s - t;
	return hieu;
}
