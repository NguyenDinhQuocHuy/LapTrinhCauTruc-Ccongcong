#define MAX 1000
#define TAB '\t'

typedef char Chuoi[MAX];

// Khai bao nguyen mau cac ham xu ly
unsigned int ChieuDai(Chuoi a);
unsigned int DemX(Chuoi a, char x);
void SaoChep(Chuoi a, Chuoi b);
void ChenX(Chuoi a, char x, unsigned int vt);
void XoaTaiVT(Chuoi a, unsigned int vt);
void ChuThuong(Chuoi a);
unsigned int KiemTra(Chuoi a);
unsigned int So(char KySo);
unsigned int DoiSangSo(Chuoi a);

// Dinh nghia cac ham xu ly
unsigned int ChieuDai(Chuoi a)
{
	unsigned int dem = 0;
	while (a[dem] != NULL)
		dem++;
	return dem;
}

unsigned int DemX(Chuoi a, char x)
{
	unsigned int dem = 0, i = 0;
	while (a[i] != NULL)
	{
		if (a[i] == x)
			dem++;
		i++;
	}
	return dem;
}

void SaoChep(Chuoi a, Chuoi b)
{
	int i = 0;
	while (a[i] != NULL)
	{
		b[i] = a[i];
		i++;
	}
	b[i] = NULL;
}

void ChenX(Chuoi a, char x, unsigned int vt)
{
	unsigned int cd = ChieuDai(a);
	if (vt <= cd)
	{
		int i = cd;
		while (i >= vt)
		{
			a[i + 1] = a[i];
			i--;
		}
		a[vt] = x;
	}
	else cout << endl << "Vi tri khong hop le !";
}

void XoaTaiVT(Chuoi a, unsigned int vt)
{
	unsigned int cd = ChieuDai(a);
	if (vt < cd)
	{
		int i = vt;
		while (a[i] != NULL)
		{
			a[i] = a[i + 1];
			i++;
		}
	}
	else cout << "Vi tri khong hop le !";
}

void ChuThuong(Chuoi a)
{
	int i = 0;
	while (a[i] != NULL)
	{
		if (a[i] >= 65 && a[i] < 91)
			a[i] += 32;
		i++;
	}
}

unsigned int KiemTra(Chuoi a)
{
	int i = 0;
	while (a[i] != NULL)
	{
		if (a[i] < 48 || a[i] > 57)
			return 0;
		i++;
	}
	return 1;
}

unsigned int So(char kySo)
{
	return kySo - 48;
}

unsigned int DoiSangSo(Chuoi a)
{
	unsigned int kq = 0;
	int i = 0;
	while (a[i] != NULL)
	{
		kq = kq * 10 + So(a[i]);
		i++;
	}
	return kq;
}