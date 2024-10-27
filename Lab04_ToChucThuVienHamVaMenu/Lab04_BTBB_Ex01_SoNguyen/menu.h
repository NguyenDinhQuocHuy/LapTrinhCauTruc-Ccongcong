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

void XuLyMenu(int menu)
{
	unsigned int n;
	switch (menu)
	{
	case 1:
		cout << endl << "a. Xuat cac so tu 1 den n:";
		cout << endl << LietKe(n);
		break;
	case 2:
		cout << endl << "b. Dem so luong cac so chia het cho 3 ma khong chia het cho 4:";
		cout << endl << DemSo(n);
		break;
	case 3:
		cout << endl << "c. Dem so luong chu so cua n: ";
		cout << endl << DemSoChuSo(n);
		break;
	case 4:
		cout << endl << "d. Dao nguoc so n: ";
		cout << endl << DaoNguoc(n);
	case 5:
		cout << endl << "e. Tinh tong cac chu so cua n";
		cout << endl << TongSoN(n);
	case 6:
		cout << endl << "f. Cho biet chu so dau tien trong n";
		cout << endl << SoDauTien(n);
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
	int soMenu = 6; // Luu so luong menu chuc nang
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}



