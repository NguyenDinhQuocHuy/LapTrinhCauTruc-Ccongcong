// Khai bao nguyen ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);
void ChayChuongTrinh(unsigned int n);

// Dinh nghia ham xu ly

// Xuat menu
void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG========"
		 << endl << "1. Tinh tong R"
		 << endl << "2. Tinh tong S"
		 << endl << "3. Tinh tong T"
		 << endl << "0. Thoat khoi chuong trinh"
		 << endl << "==============================";
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

void XuLyMenu(int menu, unsigned int n)
{
	switch (menu)
	{
	case 1:
		sum = TinhTongR(n);
		cout << endl << "R = " << sum;
		break;
	case 2:
		sum = TinhTongS(n);
		cout << endl << "S = " << sum;
		break;
	case 3:
		sum = TinhTongT(n);
		cout << endl << "T = " << sum;
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
	int menu;  // Luu so thu tu menu duoc chon
	int soMenu = 3; // Luu so luong menu chuc nang
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);

}


