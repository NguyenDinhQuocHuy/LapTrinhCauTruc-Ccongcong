// Khai bao nguyen mau ham
void Xuat(int so);
int TimLuyThua(int a, int b);
void DoiCoSo(int n, int b);

// Dinh nghia ham
void Xuat(int so)
{
	switch (so)
	{
	case 10:
		cout << "A"; break;
	case 11:
		cout << "B"; break;
	case 12:
		cout << "C"; break;
	case 13:
		cout << "D"; break;
	case 14:
		cout << "E"; break;
	case 15:
		cout << "F"; break;
	default:
		cout << so; break;
	}
}
int TimLuyThua(int a, int b)
{
	int kq, m = 0;
	do
	{
		m++;
		kq = pow(b, m);
	} while (kq < m);
	m--;
	kq = pow(b, m);
	return kq;
}
void DoiCoSo(int n, int b)
{
	int v, so;
	v = TimLuyThua(b, n);
	while (v > 0)
	{
		if (n < v)
			Xuat(0);
		else
		{
			so = n / v;
			Xuat(0);
			n = n - so * v;
		}
		v = v / b;
		cout << v;
	}
}
