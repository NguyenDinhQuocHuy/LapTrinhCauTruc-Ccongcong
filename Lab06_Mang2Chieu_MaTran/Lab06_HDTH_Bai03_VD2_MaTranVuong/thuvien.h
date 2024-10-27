// Dinh nghia hang so va cac kieu du lieu moi
#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
int TongTren(MaTran a, int n);
long TichDuoi(MaTran a, int n);
int LaSoNT(int n);
long TichSoNT_DCPhu(MaTran a, int n);
long TinhTongS(MaTran a, int n);

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

int TongTren(MaTran a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			sum += a[i][j];
	return sum;
}

long TichDuoi(MaTran a, int n)
{
	int prod = 1;
	for (int i = 0; i < n; i++)
		for (int j = n - i; j < n; j++)
			prod *= a[i][j];
	return prod;
}

int LaSoNT(int n)
{
	if (n < 2)
		return 0;
	int m = (int)sqrt((double)n);
	for (int i = 2; i <= m; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

long TichSoNT_DCPhu(MaTran a, int n)
{
	int prod = 1;
	for (int i = 0; i < n; i++)
		if (LaSoNT(a[i][n - i - 1]))
			prod *= a[i][n - i - 1];
	return prod;
}

long TinhTongS(MaTran a, int n)
{
	int t = TongTren(a, n);
	long d = TichDuoi(a, n),
		p = TichSoNT_DCPhu(a, n);
	return t + d - p;
}