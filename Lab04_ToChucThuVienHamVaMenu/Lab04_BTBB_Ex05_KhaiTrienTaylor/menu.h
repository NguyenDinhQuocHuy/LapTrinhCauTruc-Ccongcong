// Khai bao nguyen mau cac ham xu li menu

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, float x);
void ChayChuongTrinh(float x);

// Dinh nghia cac ham xu li menu

// Xuat danh sach chuc nang ra man hinh
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Tinh e^x";
	cout << endl << "2. Tinh sin(x)";
	cout << endl << "3. Tinh cos(x)";
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

void XuLyMenu(int menu, float x)
{
	switch (menu)
	{
	case 1:
		cout << endl << "Tinh e^x";
		cout << endl << "e^x = " << TinhMu(x);
		break;
	case 2:
		cout << endl << "Tinh sin(x)";
		cout << endl << "sin(x) = " << TinhSin(x);
		break;
	case 3:
		cout << endl << "Tinh cos (x)";
		cout << endl << "cos(x) = " << TinhCos(x);
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
void ChayChuongTrinh(float x)
{
	int menu;
	int soMenu = 3;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, x);
	} while (menu > 0);

}



