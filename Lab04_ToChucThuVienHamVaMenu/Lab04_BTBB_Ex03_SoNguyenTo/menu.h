
// Khai bao nguyen mau cac ham xu li menu

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

// Dinh nghia cac ham xu li menu

// Xuat danh sach chuc nang ra man hinh
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Kiem tra n co phai so nguyen to ?";
	cout << endl << "2. Xuat ra man hinh cac so nguyen to tu 1 toi n";
	cout << endl << "3. Dem so luong so nguyen to trong pham vi tu 1 den n";
	cout << endl << "4. Tinh tong cac uoc cua so nguyen to n";
	cout << endl << "5. Phan tich n thanh tich cac thua so nguyen to";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		// Xoa toan bo man hinh Console
		system("cls");

		// Goi ham xuat danh sach chuc nang (menu)
		XuatMenu();

		cout << endl << "Nhap 1 so de chon menu : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu)
{
	int n;
	do
	{
		cout << "Nhap so nguyen duong n: "; cin >> n;
	} while (n < 0);

	switch (menu)
	{
	case 1:
	{
		cout << endl << "Kiem tra n co phai so nguyen to ?";
		int kq = KiemTraSoNT(n);
		if (kq == 1)
			cout << "La so nguyen to !";
		else if (kq == 0)
			cout << "Khong la so nguyen to !";
	}
		break;
	case 2:
	{
		cout << endl << "Xuat ra man hinh cac so nguyen to tu 1 toi n";
		LietKeSoNT(n);
	}
		break;
	case 3:
	{

		cout << endl << "Dem so luong so nguyen to trong pham vi tu 1 den n";
		cout << endl << DemSoNT(n);
	}
		break;
	case 4:
	{
		cout << endl << "Tinh tong cac uoc cua so nguyen to n";
		cout << TongUocNT(n);
	}
		break;
	case 5:
	{
		cout << endl << "Phan tich n thanh tich cac thua so nguyen to";
		void PhanTichN(int n);
	}
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	}

	if (menu > 0)
	{
		cout << endl << endl << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}
void ChayChuongTrinh()
{
	int menu;
	int soMenu = 5;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);

}


