// Dinh nghia hang so va cac kieu du lieu moi
#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
int TongCacPTMaTran(MaTran a, int n);
int TichPTChiaHet3(MaTran a, int n);
void HoanVi2Cot(MaTran a, int n, int c1, int c2);
void XuatGTSongSongDuongCheoChinh(MaTran a, int n);
void XuatGTSongSongDuongCheoPhu(MaTran a, int n);
int TinhTongCacGiaTriPhiaTrenDCPhu(MaTran a, int n);
void XuatPTThuocDCChinhVaDCPhu(MaTran a, int n);

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

int TongCacPTMaTran(MaTran a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			tong += a[i][j];
	return tong;
}

int TichPTChiaHet3(MaTran a, int n)
{
	int tich = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 3 == 0)
				tich += a[i][j];
	return tich;
}

void HoanVi2Cot(MaTran a, int n, int c1, int c2)
{
	int z = 0;
	for (int i = 0; i < n; i++)
	{
		z = a[i][c1];
		a[i][c1] = a[i][c2];
		a[i][c2] = z;
	}
}

void HoanVi2Hang(MaTran a, int n, int h1, int h2)
{
	int z = 0;
	for (int j = 0; j < n; j++)
	{
		z = a[h1][j];
		a[h1][j] = a[h2][j];
		a[h2][j] = z;
	}
}

void XuatGTSongSongDuongCheoChinh(MaTran a, int n)
{
	// Xuat cac phan tu phia tren va bao gom ca duong cheo chinh
	cout << endl << "Phia tren duong cheo chinh va duong cheo chinh: " << endl;
	for (int k = 0; k < n; k++)
	{
		cout << endl << "Duong cheo bat dau tu cot: " << k << " : ";
		for (int i = 0, j = k; i < n && j < n; i++, j++)
		{
			cout << a[i][j] << TAB;
		}
		cout << endl;
	}

	// Xuat cac phan tu phia duoi duong cheo chinh
	cout << endl << "Phia duoi duong cheo chinh : " << endl;
	for (int k = 1; k < n; k++)
	{
		cout << endl << "Duong cheo bat dau tu hang: " << k << " : ";
		for (int i = k, j = 0; i < n && j < n; i++, j++)
		{
			cout << a[i][j] << TAB;
		}
		cout << endl;
	}
}

//đường chéo phụ: a[i][n-i-1]
void XuatGTSongSongDuongCheoPhu(MaTran a, int n)
{

	// trên đc phụ
	for (int j = 1; j < n; j++) //cột
	{
		cout << endl << "Duong cheo tren thu: " << j << endl;
		for (int i = 0; i < n - j; i++)	//hàng
			cout << a[i][n - i - 1 - j] << TAB;
	}
	cout << endl;


	// dưới đc phụ
	for (int j = 1; j < n; j++) //hàng
	{
		cout << endl << "Duong cheo duoi thu: " << j << endl;
		for (int i = j; i < n; i++) //cột
			cout << a[i][n - i - 1 + j] << TAB;
	}
	cout << endl;
}

int TinhTongCacGiaTriPhiaTrenDCPhu(MaTran a, int n)
{
	int tong = 0;
	for (int j = 1; j < n; j++)
	{
		for (int i = 0; i < n - j; i++)
			tong += a[i][n - i - 1 - j];
	}
	return tong;
}

void XuatPTThuocDCChinhVaDCPhu(MaTran a, int n)
{
	// xuất đc chính
	cout << endl << "Cac phan tu thuoc duong cheo chinh: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i == j)
				cout << a[i][j] << TAB;
	}

	// xuất đc phụ
	cout << endl << "Cac phan tu thuoc duong cheo phu: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (j == (n - i - 1))
				cout << a[i][j] << TAB;
	}
}