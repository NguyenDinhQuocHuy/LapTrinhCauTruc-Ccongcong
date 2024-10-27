// Khai bao nguyen mau cac ham xu ly
double TinhTongR(unsigned int n);
double TinhTongS(unsigned int n);
double TinhTongT(unsigned int n);

// Dinh nghia ham xu ly

// Dinh nghia ham tinh tong 1 + 1/2 + 1/3 + ... + 1/n
double TinhTongR(unsigned int n)
{
	double sum = 0;
	for (int i = 1; i < n; i++)
	{
		sum += 1.0 / i;
		return sum;
	}
}

// Dinh nghia ham tinh tong 2/1 + 3/4 + 4/9 + ... + (n + 1)/(n^2)
double TinhTongS(unsigned int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (i + 1.0) / (i * i);
		return sum;
	}
}

// Dinh nghia ham tinh tong -1/2 + 2/3 - 3/4 + .... + n * (-1)^n / (n + 1)
double TinhTongT(unsigned int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			sum += i / (i + 1.0);
		else
			sum -= i / (i + 1.0);
	}
	return sum;
}


