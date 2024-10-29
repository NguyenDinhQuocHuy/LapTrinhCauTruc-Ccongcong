#define MAX 1000
#define TAB '\t'

typedef char Chuoi[MAX];

// Khai bao nguyen mau cac ham xu ly
unsigned int ChieuDai(Chuoi a);
void XoaTatCaKyTu(Chuoi a, char k);
void NoiChuoiTVaoSauChuoiS(Chuoi s, Chuoi t);
void HoaThuongXenKe(Chuoi a);
void HoaThuongXenKe_C2(Chuoi a);

// Dinh nghia cac ham xu ly
unsigned int ChieuDai(Chuoi a)
{
	unsigned int dem = 0;
	while (a[dem] != NULL)
		dem++;
	return dem;
}

void XoaTatCaKyTu(Chuoi a, int &n, char k)
{
	int i = 0;
	while (i < n && a[i] != NULL)
	{
		if (a[i] == k)
		{
			for (int vt = i; vt < n - 1; vt++)
			{
				a[vt] = a[vt + 1];
			}
			n--;
		}
		else if (a[i] != k) 
		{
			i++;
		}
	}
}

void NoiChuoiTVaoSauChuoiS(Chuoi s, Chuoi t)
{
	int i = 0;
	while (s[i] != NULL)
		i++;
	int j = 0;
	while (t[j] != NULL)
	{
		s[i] = t[j];
		i++;
		j++;
	}
	s[i] = NULL;
}

void HoaThuongXenKe(Chuoi a)
{
	int n = ChieuDai(a);
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[i] = toupper(a[i]);
		else a[i] = tolower(a[i]);
}

void HoaThuongXenKe_C2(Chuoi a)
{
	int i = 0;
	while (a[i] != NULL)
		if (i % 2 == 0)
			if (a[i] > 96 && a[i] < 123)
				a[i] -= 32;
			else if (i % 2 != 0)
				if (a[i] > 64 && a[i] < 91)
					a[i] += 32;
	i++;
}

