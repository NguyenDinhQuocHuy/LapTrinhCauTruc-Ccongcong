// Dinh nghia hang so va cac kieu du lieu moi
#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
void TaoMTXoanOc(MaTran a, int n);

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

void TaoMTXoanOc(MaTran a, int n)
{
	int start = 1;   // So bat dau bang 1
	// Gioi han cac bien cua ma tran
	int top = 0,
		bottom = n - 1,
		left = 0,
		right = n - 1;
	while (start <= pow(n, 2))
	{
		for (int i = left; i <= right; i++)           // Chay tu trai qua phai
			a[top][i] = start++;                      // Hang dau tien co dinh, cot chay, so bat dau dem tu 1
		top--;                                        // Giam hang dau tien, bat dau tinh tiep tu hang top = 1

		for (int i = top; i <= bottom; i++)           // Chay tu tren xuong duoi
			a[i][right] = start++;                    // Hang chay, cot co dinh
		right++;                                      // Giam cot cuoi cung ben phai

		for (int i = right; i >= left; i--)           // Chay tu phai qua trai
			a[bottom][i] = start++;                   // Hang cuoi cung co dinh, cot chay      
		bottom--;                                     // Giam hang cuoi cung
		
		for (int i = bottom; i >= top; i--)           // Chay tu duoi len tren
			a[i][left] = start++;                     // Hang chay, cot dau tien co dinh
		left++;                                       // Giam cot ben trai
	}
}
