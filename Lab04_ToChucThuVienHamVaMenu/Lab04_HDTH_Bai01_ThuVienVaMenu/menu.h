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
	cout << endl << "1. Chon chuc nang thu nhat";
	cout << endl << "2. Chon chuc nang thu hai";
	cout << endl << "3. Chon chuc nang thu ba";
	cout << endl << "4. Chon chuc nang thu tu";
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
	switch (menu)
	{
	case 1:
		cout << endl << "Ban da chon chuc nang 1";
		break;
	case 2:
		cout << endl << "Ban da chon chuc nang 2";
		break;
	case 3:
		cout << endl << "Ban da chon chuc nang 3";
		break;
	case 4:
		cout << endl << "Ban da chon chuc nang 4";
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
	int soMenu = 4;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);

}


