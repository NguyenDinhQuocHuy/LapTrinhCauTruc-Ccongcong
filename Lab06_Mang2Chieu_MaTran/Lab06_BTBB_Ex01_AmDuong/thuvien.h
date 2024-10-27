// Dinh nghia hang so va cac kieu du lieu moi
#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
bool KiemTraXuatHien(MaTran a, int n, int x);
float SoDuongNhoNhatHang(MaTran a, int n, int i);
float SoAmLonNhatCot(MaTran a, int n, int j);
float TongS(MaTran a, int n);
float TongT(MaTran a, int n);
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

bool KiemTraXuatHien(MaTran a, int n, int x)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				return false;
	return true;
}

float SoDuongNhoNhatHang(MaTran a, int n, int i)
{
	float min;
	for (int j = 0; j < n; j++)
		if (a[i][j] > 0)
		{
			min = a[i][j];
			break;
		}

	for (int j = 0; j < n; j++)
		if (a[i][j] > 0 && a[i][j] < min)
			min = a[i][j];
	return min;
}

float SoAmLonNhatCot(MaTran a, int n, int j)
{
	float max;
	for (int i = 0; i < n; i++)
		if (a[i][j] < 0)
		{
			max = a[i][j];
			break;
		}
	
	for (int i = 0; i < n; i++)
		if (a[i][i] < 0 && a[i][j] > max)
	return max;
}

float TongS(MaTran a, int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
				s += SoDuongNhoNhatHang(a, n, i);
	return s;
}

float TongT(MaTran a, int n)
{
	float t = 0;
	for (int j = 0; j < n; j++)
		for (int i = 0; i < n; i++)
				t += SoAmLonNhatCot(a, n, j);
	return t;
}

float TinhT_S(MaTran a, int n)
{
	float s = TongS(a, n), t = TongT(a, n);
	float hieu = s - t;
	return hieu;
}