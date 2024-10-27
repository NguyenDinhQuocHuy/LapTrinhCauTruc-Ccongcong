#define TAB '\t'

// Khai bao nguyen mau ham
void LietKe(int n);
int DemSo(int n);
int DemSoChuSo(int n);
int DaoNguoc(int n);
int TongSoN(int n);
int SoDauTien(int n);

// Khai bao nguyen mau ham
void LietKe(int n)
{
	for (int i = 0; i <= n; i++)
		cout << i << TAB;
}
int DemSo(int n)
{
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0 && i % 4 != 0)
			dem += 1;
	}
	return dem;
}

int DemSoChuSo(int n)
{
	int dem = 0;
	while (n != 0)
	{
		n /= 10;
		dem++;
	}
	return dem;
}

int DaoNguoc(int n)
{
	int daoNguoc = 0;
	while (n != 0)
	{
		int soNguoc = n % 10;
		daoNguoc = daoNguoc * 10 + soNguoc;
		n /= 10;
	}
	return daoNguoc;
}

int TongSoN(int n)
{
	int tong = 0;
	int dem = 0;
	while (n != 0)
	{
		n /= 10;
		dem++;
		tong += dem;
	}
	return tong;

}

int SoDauTien(int n)
{
	n = abs(n);
	while (n >= 10)
	{
		n /= 10;
	}
	return n;
}

