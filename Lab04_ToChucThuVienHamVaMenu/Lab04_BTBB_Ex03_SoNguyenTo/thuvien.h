#define TAB "\n"

// Khai bao nguyen mau ham
int KiemTraSoNT(int n);
void LietKeSoNT(int n);
int DemSoNT(int n);
int TongUocNT(int n);
void PhanTichN(int n);
// Dinh nghia ham

int KiemTraSoNT(int n)
{
	if (n < 2)
		return 0;  //nhỏ hơn 2 thì không phải là số nguyên tố.
	for (int i = 2; i <= sqrt(n); i++) // Vì không có ước nào của n lớn hơn căn bậc 2 của n, nên dùng sqrt để giảm phạm vi tìm kiếm.
	{
		if (n % i == 0)     // chia hết cho i thì không phải số nguyên tố.
			return 1;
	}
	return 0;     //nếu không chia hết cho i nào thì là số nguyên tố.
}

void LietKeSoNT(int n)
{
	int so = 2;
	while (so <= n)
	{
		if (KiemTraSoNT(so)) //vì hàm KimTraSoNT trả về số nguyên tố nên sẽ kiểm tra xem có phải số nguyên tố không
		{
			cout << so << TAB;//in số nguyên tố
		}
		so++; //tăng số đếm lên 1 đơn vị để ktra tiếp
	}
}

int DemSoNT(int n)
{
	int soLuong = 0; //số lượng số nguyên tố ban đầu bằng 0
	int so = 2;
	while (so <= n) //khi số nguyên tố đó <= số nhập vào
	{
		if (KiemTraSoNT(so)) //vì hàm KimTraSoNT trả về số nguyên tố nên sẽ kiểm tra xem có phải số nguyên tố không
		{
			soLuong++; //nếu đúng là số nguyên tố thì tăng thêm 1 số
		}
		so++; //tăng số đếm lên 1 đơn vị để ktra tiếp
	}
	return soLuong;
}

int TongUocNT(int n)
{
	int tong, uoc;
	tong = 0;
	uoc = 2;
	while (uoc <= sqrt(n)) //vì ước của 1 số luôn luôn bé hơn căn bậc 2 của số đó
	{
		if (KiemTraSoNT(uoc) && n % uoc == 0)
		{
			tong += uoc; //nếu là ước của n thì cộng vào
		}
		//kiểm tra ước đối
		int uocDoi = n / uoc;
		if (uoc != uocDoi && KiemTraSoNT(uocDoi) && n % uoc == 0)
		{
			tong += uocDoi; // nếu là ước đối khác ước thì cộng nào
		}
		uoc++; //tăng phạm vi
	}
	return tong;
}

void PhanTichN(int n)
{
	while (n % 2 == 0) //chia cho 2 tới khi không chia được nữa
	{
		cout << 2 << ".";
		n /= 2;   //nếu còn chia cho 2 được thì chia tiếp
	}
	for (int i = 3; i <= n; i += 2)   // không phải là sqrt(n)
	{
		while (n % i == 0)   //không chia cho 2 được nữa thì chia cho các số lẻ phía sau
		{
			cout << i << ".";
			n /= i;
		}
	}
}