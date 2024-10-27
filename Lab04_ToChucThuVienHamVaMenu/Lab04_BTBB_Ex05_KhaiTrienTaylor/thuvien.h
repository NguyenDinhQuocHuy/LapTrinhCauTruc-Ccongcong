// Khai bao define

// Khai bao nguyen mau ham
double TinhMu(double x);
double TinhSin(double x);
double TinhCos(double x);

// Dinh nghia ham
double TinhMu(double x)
{
	double hangTu = 1; // Gia tri cua tung hang tu
	double tong = 1;   // Tong cua chuoi Taylor
	int n = 1;         // Bien dem giai thua
	while (hangTu > 1e-5) // Tiep tuc cong cho den khi hang tu < 10^-15
	{
		hangTu *= x / n;
		tong += hangTu;
		n++;
	}
	return tong;
}

double TinhSin(double x)
{
	double hangTu = x; // Gia tri cua tung hang tu
	double tong = x;   // Tong cua chuoi Taylor
	int n = 1;         // Bien dem giai thua
	bool am = true;

	while (abs(hangTu) > 1e-5) // Tiep tuc cong cho den khi hang tu < 10^-5
	{
		hangTu *= (x * x) / ((2.0 * n) * (2.0 * n + 1.0));
		if (am)
			tong -= hangTu;
		else
			tong += hangTu;
		am = !am;
		n++;
	}
	return tong;
}

double TinhCos(double x)
{
	double hangTu = 1; // Gia tri cua tung hang tu
	double tong = 1;   // Tong cua chuoi Taylor
	int n = 1;         // Bien dem giai thua
	bool am = true;

	while (abs(hangTu) > 1e-5)
	{
		hangTu *= (x * x) / ((2.0 * n - 1) * (2 * n));
		if (am) tong -= hangTu;
		else
			tong += hangTu;
		am = !am;
		n++;
	}
	return tong;
}
