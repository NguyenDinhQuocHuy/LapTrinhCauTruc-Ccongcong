// Khai bao cac gia tri
#define TAB "/t"
// Khai bao nguyen mau ham

// Dinh nghia ham

void TimUocN(int n) 
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << ", ";
		}
	}
}

int TimSoLuongUoc(int n) 
{
	int soLuong;
	soLuong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			soLuong++;
		}
	}
	return soLuong;
}

int TinhTongSoUoc(int n)
{
	int tong, uoc;
	tong = 0;
	uoc = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			uoc = i;
			tong += uoc;
		}
	}
	return tong;
}

int CanBac2(int n)
{
	if (n == 0 && n == 1)
		return n; // căn bậc 2 của 0 và 1 là 0 và 1
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
		{
			return i;
		}
		else if (i * i > n)
			return i - 1; //trả về giá trị của số nguyên trước đó
	}
	return 0;
}

int SoLonNhat(int n)
{
	int max = 2;
	while (max * 2 <= n) // lũy thừa của 2 thì cứ nhân 2 lên
	{
		max *= 2;
	}
	return max;
}