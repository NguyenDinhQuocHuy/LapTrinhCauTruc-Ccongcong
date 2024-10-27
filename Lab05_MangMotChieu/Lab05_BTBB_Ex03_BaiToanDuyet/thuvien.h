#define TAB '\t'
#define MAX 1000

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
void HoanVi(int& x, int& y);
void SapTang(DaySo a, int n);
void SapGiam(DaySo a, int n);
void SapDuongT_GiuNguyenVT(DaySo a, int n);
void SapTang_0(DaySo a, int n);
void Sap0_AmGiam_DuongTang(DaySo a, int n);
void SapLeT_ChanG(DaySo a, int n);
void SapLeG_ChanT_KhongDoiVT(DaySo a, int n);
int KiemtraSNT(int n);
void SapSoNTTang_SoConLaiGiam(DaySo a, int n);
void XaoTronMang(DaySo a, int n);

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

void HoanVi(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}

void SapTang(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int dk = a[i] > a[j];
			if (dk)
				HoanVi(a[i], a[j]);
		}
	}
}

void SapGiam(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void SapDuongT_GiuNguyenVT(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > 0 && a[j] > 0)
			{
				if (a[i] > a[j])
					HoanVi(a[i], a[j]);
			}
		}
	}
}

void SapTang_0(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			dk = (a[i] == 0 && a[j] != 0)
				|| (a[i] != 0 && a[i] != 0 && a[i] > a[j]);

			if (dk)
				HoanVi(a[i], a[j]);
		}
	}
}

void Sap0_AmGiam_DuongTang(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			dk = (a[i] != 0 && a[j] == 0)
				|| (a[i] > 0 && a[j] < 0)
				|| (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				|| (a[i] < 0 && a[j] < 0 && a[i] < a[j]);

			if (dk)
				HoanVi(a[i], a[j]);
		}
	}
}

void SapLeT_ChanG(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 == 0 && a[j] % 2 != 0)
				HoanVi(a[i], a[j]);
			else if (a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				dk = (a[i] > a[j]);
				if (dk)
					HoanVi(a[i], a[j]);
			}
			else if (a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				dk = (a[i] < a[j]);
				if (dk)
					HoanVi(a[i], a[j]);
			}
		}
	}
}

void SapLeG_ChanT_KhongDoiVT(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				dk = (a[i] < a[j]);
				if (dk)
					HoanVi(a[i], a[j]);
			}
			else if (a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				dk = (a[i] > a[j]);
				if (dk)
					HoanVi(a[i], a[j]);
			}
		}
	}
}

int KiemtraSNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void SapSoNTTang_SoConLaiGiam(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KiemtraSNT(a[j]))
			{
				HoanVi(a[i], a[j]);
			}
			if (KiemtraSNT(a[i]) && KiemtraSNT(a[j]))
			{
				dk = a[i] > a[j];
				if (dk)
					HoanVi(a[i], a[j]);
			}
			if (KiemtraSNT(a[i]) == 0 && KiemtraSNT(a[j]) == 0)
			{
				dk = a[i] < a[j]; // Mang giam
				if (dk)
					HoanVi(a[i], a[j]);
			}
		}
	}
}
void XaoTronMang(DaySo a, int n)
{
	srand(time(0));
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		HoanVi(a[i], a[j]);
	}		
}