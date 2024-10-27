// Dinh nghia hang so va cac kieu du lieu moi
#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
void CongHaiMaTran(MaTran a, MaTran b, MaTran kq, int n);
void TruHaiMaTran(MaTran a, MaTran b, MaTran kq, int n);
void NhanMaTranVoi1So(MaTran a, int n, int x);
void Nhan2MaTran(MaTran a, MaTran b, MaTran kq, int n);

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

void CongHaiMaTran(MaTran a, MaTran b, MaTran kq, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			kq[i][j] = a[i][j] + b[i][j];
}

void TruHaiMaTran(MaTran a, MaTran b, MaTran kq, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			kq[i][j] = a[i][j] - b[i][j];
}

void NhanMaTranVoi1So(MaTran a, int n, int x)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] *= x;
}

void Nhan2MaTran(MaTran a, MaTran b, MaTran kq, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			kq[i][j] = a[i][j] * b[i][j];
}